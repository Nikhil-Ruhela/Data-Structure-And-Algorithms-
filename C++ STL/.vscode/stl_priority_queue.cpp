#include<iostream>
using namespace std;
#include<queue>

int main(){
    
    // max heap
    priority_queue<int>maxi;

    // min heap
    priority_queue<int , vector<int> , greater<int>>mini;

    maxi.push(2);
    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(0);

    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<"Element at top --> "<<maxi.top()<<endl;
        maxi.pop();
    }

cout<<endl<<endl;

    mini.push(2);
    mini.push(1);
    mini.push(3);
    mini.push(5);
    mini.push(0);

    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<"Element at top --> "<<mini.top()<<endl;
        mini.pop();
    }

cout<<"empty or not "<<mini.empty()<<endl;
cout<<"empty or not "<<maxi.empty()<<endl;


    return 0;
}