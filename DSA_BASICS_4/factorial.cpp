#include<iostream>
using namespace std;

int main(){
    int n , fact =1;
     cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i =n; i>=1;i--){
    fact = fact*i;
    }
   cout<<"factorial of given no. is"<<endl;
   cout<<fact;
    return 0;
}