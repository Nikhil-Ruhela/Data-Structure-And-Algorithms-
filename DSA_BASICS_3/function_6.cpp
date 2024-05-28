#include<iostream>
using namespace std;
int sum(int a , int b =0 , int c =0 ){
return ( a + b + c);
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a , b and c"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"the sum of given data is "<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<"the sum of given data is "<<endl;
    cout<<sum(a,b)<<endl;
    cout<<"the sum of given data is "<<endl;
    cout<<sum(a)<<endl;
    
    return 0;
}