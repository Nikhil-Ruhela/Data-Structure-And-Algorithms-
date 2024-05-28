#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;

    if(n==0 || n== 1){
       return fact;;
    }
    for( int i = 1; i<=n;i++){
         fact = fact*i;
        
    }
         return fact;
 
}
int main(){
  
    int n;
    cout<<"Enter the value of n"<<" ";
    cin>>n;
    cout<<endl;
    cout<<"factorial of given no. is"<<" ";
    cout<<factorial(n);
    return 0;
}