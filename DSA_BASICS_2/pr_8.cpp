#include<iostream>
using namespace std;
int product(int a, int b) {
    int product = a*b;
    return product;
}
int main(){
    int a,b;
    cout<<"Enter the value of a"<<" ";
    cin>>a;
    cout<<"Enter the value of b"<<" ";
    cin>>b;
    cout<<"The product of given no. is "<<" ";

    cout<<product(a,b);
    return 0;
}