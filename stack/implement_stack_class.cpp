#include<iostream>
#include<stack>
using namespace std;

class Stack  {
    // properties 
    public:
    int *arr;
    int top;
    int size;
    // behavious
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
      if(size - top > 1){
        top++;
        arr[top] = element;
      }
      else{
        cout<<"stack overflow "<<endl;
      }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack underflow "<<endl;
        }
    }

    int peek(){
       if(top>=0 && top<size){
        return arr[top];
       }
       else{
        cout<<"stack is empty "<<endl;
        return -1;
       }
    }

    bool is_empty(){
     if(top == -1){
        return true;
     }
     else{
        return false;
     }
    }
};

int main(){

   Stack st(5);
   st.push(10);
   st.push(20);
   st.push(30);

   cout<<"Element at top is: "<<st.peek()<<endl;

   st.pop();
   cout<<"Element at top is: "<<st.peek()<<endl;

   if(st.is_empty()){
    cout<<"stack is empty "<<endl;
   }
   else{
    cout<<"stack is not empty "<<endl;
   }

   st.pop();
   cout<<"Element at top is: "<<st.peek()<<endl;

   st.pop();
   cout<<"Element at top is: "<<st.peek()<<endl;
   
   if(st.is_empty()){
    cout<<"stack is empty "<<endl;
   }
   else{
    cout<<"stack is not empty "<<endl;
   }
    return 0;
}