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
    front = -1;
    rear = -1;
}
bool push_front(int data){
    if(isFull()){
        cout<<"Queue is Full "<<endl;
        return false;
    }
      else if(isEmpty()){
     front = rear = 0;
    }
    else if((front == 0) && (rear != (size-1))){
        front = size-1;
    }
    else{
        front--;
    }
    arr[front] = data;
    return true;
}

bool push_back(int data){
    if(isFull()){
        cout<<"Queue is Full "<<endl;
        return false;
    }
      else if(isEmpty()){
         front = rear = 0;
    }
    else if(rear == (size-1) && front != 0){
        rear = 0;
    }
    else{
        rear ++;
    }
    arr[rear] = data;
    return true;
}
int pop(){
    if(isEmpty()){
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

int pop_back(){
    if(isEmpty()){
        cout<<"Queue is empty "<<endl;
        return -1;
    }
    int ans = arr[rear];
    arr[rear] = 0;
    if(front == rear){    // if single element is present
        front = rear = -1;
    }
    else if(rear == 0){
        rear = size-1;
    }
    else{
        rear--;
    }
}
// function to check queue is empty or not
bool isEmpty(){
    if(front == -1){
     return true;
    }
    else{
        return false;
    }
}
int get_front(){
    if(isEmpty()){
     return -1;
    }
    else{
        return arr[front];
    }
}
int get_Back(){
    if(isEmpty()){
        return -1;
    }
    else{
        return arr[rear];
    }
}
bool isFull(){
    if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
        return true;
    }
    else{
        return false;
    }
}
void print_queue(){
  if(isEmpty()){
    cout<<"Queue is empty "<<endl;
  }
  else{
    int i = front;
    cout<<"Queue element :  ";
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
   q.push_front(2);
   q.push_front(4);
   q.push_front(6);
   q.push_back(8);
   q.push_back(10);
   q.push_back(20);

   q.pop_back();

   q.print_queue();
    return 0;
}