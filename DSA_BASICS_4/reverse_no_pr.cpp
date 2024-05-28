#include<iostream>
using namespace std;

int main(){
    int n ,sum = 0, digit;
    cout<<"Enter the digit"<<endl;
    cin>>n;

    for(int i = 0 ;n!=0; i++){
       
        digit = n%10;
        sum = sum*10 + digit;
        n=n/10;

         if(sum>(INT64_MAX)/10 || sum< (INT64_MIN)/10){
            // cout<<"0"<<endl;
            return 0;
        }

        

    }
    cout<<sum;
    return 0;
}