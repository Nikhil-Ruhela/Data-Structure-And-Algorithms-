#include<iostream>
using namespace std;

int max(int , int );

int main(){
    int a , b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"the maximum of a and b is"<<" ";
    cout<<max(a,b);
    return 0;
}
int max(int x , int y){
    if(x>y)
    cout<<x<<endl;
    else
    cout<<y<<endl;
}