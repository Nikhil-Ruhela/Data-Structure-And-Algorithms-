#include<iostream>
using namespace std;
 void update (int **p){
    p = p +1;

    // *p2 = *p2+1;

    // **p2=**p2+1;

 }
int main(){
    int a  = 5;
    int *p = &a;
    int *q = p;
    (*q)++;
    cout<<a;
    // int** p2 = &p;
    // cout<<p<<endl;
    // cout<<*p2<<endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;

    // cout<<"Before "<<a<<endl;
    // cout<<"Before "<<p<<endl;
    // cout<<"Before "<<p2<<endl;
    // update(p2);
    // cout<<"After "<<a<<endl;
    // cout<<"After "<<p<<endl;
    // cout<<"After "<<p2<<endl;
    


        return 0;
}