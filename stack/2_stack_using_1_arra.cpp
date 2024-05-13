#include<iostream>
using namespace std;

class Two_Stack{
    int *arr;
    int top1;
    int top2;
    int size;

    public:

    // initialize Twostack

    Two_Stack(int s){
        this->size =s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // push in stack 1

    void push1(int num){
        // atlest a empty space is present
        if(top2 - top1 > 1){
        top1++;
        arr[top1] = num;
        }
        else{
            cout<<"stack overFlow "<<endl;
        }
    }

    // push in stack 2

    void push2(int num){
        // atlest a empty space is present
        if(top2 - top1 > 1){
        top2--;
        arr[top2] = num;
        }
        else{
            cout<<"stack overFlow "<<endl;
        }
    }

    // pop from stack 1 and return popped element
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
            // cout<<"stack is empty "<<endl;
        }
    }

     // pop from stack 2 and return popped element
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
            // cout<<"stack is empty "<<endl;
        }
    }

    int peek1(){
       if(top1>=0 && top2<size){
        return arr[top1];
       }
       else{
        cout<<"stack is empty "<<endl;
        return -1;
       }
    }
    int peek2(){
       if(top1>=0 && top2<size){
        return arr[top2];
       }
       else{
        cout<<"stack is empty "<<endl;
        return -1;
       }
    }
};
int main(){
   Two_Stack st(6);
   st.push1(10);
   st.push1(20);
   st.push1(30);
   st.push2(40);
   st.push2(50);
   st.push2(60);

   cout<<"Element at top is: "<<st.peek2()<<endl;

   st.pop1();
   cout<<"Element at top of 1st stack is: "<<st.peek1()<<endl;

   st.pop2();
   cout<<"Element at top of 2nd stack is: "<<st.peek2()<<endl;

   st.pop1();
   cout<<"Element at top of 1st stack is: "<<st.peek1()<<endl;

   st.pop2();
   cout<<"Element at top of 2nd stack is is: "<<st.peek2()<<endl;

    return 0;
}