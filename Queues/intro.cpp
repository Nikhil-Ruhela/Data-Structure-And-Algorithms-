#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);

    cout<<"Element at front of queue is : "<<q.front()<<endl;
    cout<<"Element at back of queue is : "<<q.back()<<endl;
    
    cout<<"size of queue "<<q.size()<<endl;

    q.pop();
    
    cout<<"size of queue "<<q.size()<<endl;
    
    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty "<<endl;

    }
    return 0;
}