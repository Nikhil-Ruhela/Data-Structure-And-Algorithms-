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
    size = 5;
    arr = new int[size];
    front = -1;
    rear = -1;
}
// function to check queue is empty or not
bool IsEmpty(){
    return front == -1;
}
// function to check queue is Full or not
bool IsFull(){

}

bool push(int data){
    if(((front == 0) && (rear == (size -1)))  || (rear == (front - 1)%(size-1))){
        // cout<<"Queue is Full "<<endl;
        return -1;
    }
    else if(front == -1){ // first element to push
      front = rear = 0;
      arr[rear] = data;
    }
    else if(rear == (size -1) && front != 0){
        rear = 0;
        arr[rear] = data;
    }
    else{
        rear++;
        arr[rear] = data;
    }
}
int pop(){
    if(front == -1){
        cout<<"Queue is empty "<<endl;
        return -1;
    }
    int ans = arr[front];
    arr[front] = -1;
    if(front == rear){    // if single element is present
        front = rear = -1;
    }
    else if(front == (size - 1)){
        front = 0;  // to mentain cyclic nature
    }
    else{
        front++;
    }
    return ans;
}

void print_queue(){
  if(IsEmpty()){
    cout<<"Queue is empty "<<endl;
  }
  else{
    int i = front;
    cout<<"Queue element "<<endl;
    while(i != rear){
        cout<<arr[i]<<" ";
        i = (i+1)%size;
    }
    cout<<arr[rear]<<endl;
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

   q.print_queue();

   q.pop();
   q.print_queue();
   
   q.push(20);
   

   q.print_queue();
 


    return 0;
}

