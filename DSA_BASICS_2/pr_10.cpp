#include<iostream>
using namespace std;

 void even_odd(int a){
    if(a%2==0){
        cout<<"even";
    }
    else
    cout<<"odd";
}
int main(){
    int a;
    cout<<"Enter the value of a"<<" ";
    cin>>a;
    cout<<"The given value is"<<" ";
    even_odd(a);
    return 0;
}