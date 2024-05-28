#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool p=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"n is non prime no.";
            p=1;
            break;
        }
        }
        if(p==0){
            cout<<"n is prime no.";
        }
    
    return 0;
}