#include<iostream>
using namespace std;

int main(){
    int pocketmoney =3000;
    
    for(int date = 1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney<=200){
            break;
        }
        
            cout<<"she can go market on"<<endl;
            cout<<date<<endl;

            pocketmoney==pocketmoney-500;
        
    }
    return 0;
}