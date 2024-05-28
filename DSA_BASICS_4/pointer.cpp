#include<iostream>
using namespace std;

int main(){
    int num = 5;
    // int a = num;
    double num2 = 4.3;
    int *p = &num;
    cout<<num<<endl;        
    cout<<&num<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<num<<endl;

    cout<<sizeof(num)<<endl;
    cout<<sizeof(p)<<endl;

    int *q = p;
    cout<<p<<"->"<<q<<endl;
    cout<<*p<<"->"<<*q<<endl;

    return 0;

}