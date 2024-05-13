#include<iostream>
using namespace std;
#include<stack>
 
int main(){

    stack<string>s;

    s.push("Nikhil");
    s.push("Kumar");
    s.push("Ruhela");

    cout << "size of stack before pop" << s.size() << endl;

    cout<<"Top Element\t"<<s.top()<<endl;

    s.pop();
    cout<<"Top Element\t"<<s.top()<<endl;

    cout << "size of stack after pop" << s.size() << endl;
   
    cout << "empty or not\t" << s.empty() << endl;
    
    return 0;
}