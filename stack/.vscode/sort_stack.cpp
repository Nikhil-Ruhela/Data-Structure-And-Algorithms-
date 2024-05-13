#include<iostream>
#include<stack>
using namespace std;

void sorted_insert(stack<int>&s , int number){
    if(s.empty() || (!s.empty() && s.top()<number)){
        s.push(number);
        return ;
    }
    int num = s.top();
    s.pop();
    sorted_insert(s, number);
    s.push(num);
}
// stack<int> sort_stack(stack<int>&s){
  void sort_stack(stack<int>&s){

    if(s.empty()){
        return ;
    }
    int top = s.top();
    s.pop();
    sort_stack(s);

    sorted_insert(s,top);
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
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    // stack<int> Sorted_Stack = sort_stack(s);
    sort_stack(s);

    print_reverse(s);
    return 0;
}