#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s ,int x){
   if(s.empty()){
    s.push(x);
    return ;
   }
   int num = s.top();
   s.pop();
   solve(s , x);
   s.push(num);
}
stack<int> InsertAtBottom(stack<int>&mystack , int x){
  solve(mystack ,x);
  return mystack;

}
void print_reverse(stack<int>s){
    if(s.empty()){
        return ;
    }
    int top = s.top();
    s.pop();
    print_reverse(s);
    cout<<top;
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    int n;
    cout<<"Enter the value of number that you want to insert at bottom "<<endl;
    cin>>n;
    stack<int> newstack = InsertAtBottom(s , n);
    print_reverse(newstack);
    return 0;
}