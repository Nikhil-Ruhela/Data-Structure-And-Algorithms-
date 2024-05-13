#include<iostream>
#include<stack>
using namespace std;

int solve(stack<int>s , int count , int size){
    if(count == size/2){
    s.pop();
    }
    int num = s.top();
    s.pop();
    // RECURSIVE CALL
    solve(s,count+1,size);
    s.push(num);

}
int deletemiddle(stack<int>&s , int N){
    int count = 0;
    solve(s, count, N);

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
int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    stack<int> newstack = deletemiddle(s , 5);
   

    
    return 0;
}
