#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ,zero = 0,one = 0;
    cout <<"enter the no."<<endl;
    cin>>n;
    for(int i = 1; n!=0; i++){
        if(n%2==0){
         zero = zero + 1;
        }
        else
        one = one + 1;
        n = n/2;
    }
    cout<<"zero in binary no. of n is\t"<<zero<<endl<<"one in binary no. of n is\t"<<one;
    return 0;
}