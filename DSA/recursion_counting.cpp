#include<iostream>
using namespace std;

 void print(int n){
        if(n==0){
            return ;
        }
    // cout<<n<<endl; // in decering order
    
    
        print(n-1);
        
    cout<<n<<endl; // incering order
    }
int main(){
   int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}