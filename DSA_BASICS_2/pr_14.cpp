#include<iostream>
using namespace std;

int main(){
    char n , alphabate = 'A';
    
    cout<<"Enter the uppercase alphabate"<<" ";
    cin>>n;

    for(int i = 1;i<=n -'A' + 1;i++){
        for(int j = 1;j<=i;j++){
            cout<<alphabate<<" ";
            
        }
        ++alphabate;
        cout<<endl;
    }
    return 0; 
}