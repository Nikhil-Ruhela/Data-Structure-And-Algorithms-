#include<iostream>
using namespace std;

int main(){
    int a , b, sum;
     cout<<"Enter the value of a"<<" ";
     cin>>a;
     cout<<"Enter the value of b"<<" ";
     cin>>b;
     sum = 0;
     for(int i = a;i<=b;i++){
        if(i%2==0){
            sum = sum + i;
        }
     }
     cout<<"The sum of even no. between a and b is "<<" ";
     cout <<sum;
    return 0;
}