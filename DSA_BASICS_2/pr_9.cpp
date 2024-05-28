#include<iostream>
using namespace std;

int max(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}

int min(int a, int b){
    if(a<b){
        return a;
    }
    else
    return b;
}
int main(){
     int a, b;
    cout<<"Enter the value of a"<<" ";
    cin>>a;
    cout<<"Enter the value of b"<<" ";
    cin>>b;
    cout<<"the maximum of given no. is "<<" ";
    cout<<max(a,b);
    cout<<endl;
    cout<<"the minimum of given no. is "<<" ";
    cout<<min(a,b);
    return 0;
}