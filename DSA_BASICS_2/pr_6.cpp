#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cout<<"Enter first no."<<" ";
    cin>>a;
    cout<<"Enter second no."<<" ";
    cin>>b;
    int x = min(a , b);
    int ans =1;
    for(int i = 1 ; i<=x; i++){
        if(a%i==0 && b%i==0){
            ans = i;

        }
    
    }
        cout<<ans;

    return 0;
}