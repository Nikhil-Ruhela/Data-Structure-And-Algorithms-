#include<iostream>
using namespace std;
#include<queue>
int main(){
    
    queue<string>q;

    q.push("Nikhil");
    q.push("Kumar");
    q.push("Ruhela");

    cout << "size of stack before pop\t" << q.size() << endl;

    cout<<"first element\t"<<q.front()<<endl;
    cout<<"last element\t"<<q.back()<<endl;

    q.pop();

    cout<<"After pop"<<endl;

    cout<<"first element\t"<<q.front()<<endl;
    cout<<"last element\t"<<q.back()<<endl;

     cout << "size of stack after pop\t" << q.size() << endl;
   
    cout << "empty or not\t" << q.empty() << endl;

    return 0;
}