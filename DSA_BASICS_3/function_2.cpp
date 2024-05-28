#include<iostream>
using namespace std;
int max(int x , int y){
    if(x>y)
    return x;  
    else
    return y;
}
int main(){
    int a ,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<max(a , b);
    
    return 0;
}