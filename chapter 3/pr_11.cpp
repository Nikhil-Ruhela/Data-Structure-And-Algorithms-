#include<iostream>
using namespace std;

void age(int a){
    if(a>=18){
        cout<<"He/She is elligible for vote";
    }
    else
    cout<<"He/She is not ellifible for vote";
}
int main(){
    int x;
    cout<<"Enter the value of x"<<" ";
    cin>>x;
    age(x);
    return 0;
}