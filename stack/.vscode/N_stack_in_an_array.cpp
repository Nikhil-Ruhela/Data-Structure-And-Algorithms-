#include<iostream>
using namespace std;

class NStack{
    int *arr;
    int *top;
    int *next;

    int n , s;
    int freespot;
    public:
     
    //  constructor
    NStack(int N , int S){
        n=N;
        s=S;
        
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // top initialise
        for(int i=0;i<n;i++){
            top[i] = -1;
        }
        // next initialise
        for(int i=0;i<s;i++){
            next[i] = i+1;
        }
        // update last index value to -1;
        next[s-1] = -1;

        // initialise freespot
        freespot = 0;
    }

    // push 'X' into the Mth stack , return true if it pushed into the stack outerwise false
    bool push(int X,int m){
        // check for overflow
        if(freespot == -1){
            return false;
        }
        // step 1: find INDEX
        int index = freespot;

        // update freespot
        freespot = next[index];

        // insert element into an array
        arr[index] = X;
        
        // update next
        next[index] = top[m-1];
        
        // update top
        top[m-1] = index;

        return true;
    }

    // pop top element from Mth stack. return -1 if stack is empty otherwise return the popped element
    // it is reverse of push
    int pop(int m){
        // check underflow condition
        if(top[m-1] == -1){
            return -1;
        }

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freespot;

        freespot = index;

        return arr[index];
    }
};
int main(){
    
    return 0;
}