#include<iostream>
using namespace std;

class Queue{
    // queue<int>element;
int* arr;
int front;
int rear;
int size;

public:
Queue(){
    size = 100;
    arr = new int[size];
    front = 0;
    rear = 0;
}
bool isempty(){
    if(front == rear){
        return true;
    }
    else{
        return false;
    }
}

void push(int data){   // enqueue meaning push
    if(rear == size){
        cout<<"Queue is full "<<endl;
    }
    else{
        arr[rear] = data;
        rear++;
        
    }
}
void print_queue(){
     if(front == -1){
        cout<<"Queue is empty "<<endl;
     }
     else{
        cout<<"Queue Element "<<endl;
        for(int i=front; i<rear;++i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
}

void Queue_reversal(){
     if(front == -1){
        cout<<"Queue is empty "<<endl;
     }
     else{
        cout<<"Queue Element "<<endl;
        for(int i=rear-1; i>=front;--i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
}
};
int main(){
   Queue q;
   q.push(2);
   q.push(4);
   q.push(6);
   q.push(8);
   q.push(10);
   cout<<"Element of Queue :";
   q.print_queue();
   cout<<"Element of Queue in reverse order :";
   q.Queue_reversal();

    return 0;
}