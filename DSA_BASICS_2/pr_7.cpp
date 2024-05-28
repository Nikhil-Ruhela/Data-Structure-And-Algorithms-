#include<iostream>
using namespace std;

int sum( int a , int b){
    int sum;
    sum = a + b;
    return sum;
}
int main(){
    int a, b;
    cout<<"Enter the value of a"<<" ";
    cin>>a;
    cout<<"Enter the value of b"<<" ";
    cin>>b;
    cout<<"The sum of given no. is "<<" ";
    cout<<sum(a,b);
    
    return 0;
}