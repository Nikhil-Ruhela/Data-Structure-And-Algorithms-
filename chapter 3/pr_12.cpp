#include<iostream>
using namespace std;

int prime(int a){
   for(int i = 2; i<a;i++){
    if(a%i==0){
       return 0;
   }
}
return 1;
}
int main(){
    int a;
    cout<<"Enter the number"<<" ";
    cin>>a;
    cout<<prime(a);
    return 0;
}


