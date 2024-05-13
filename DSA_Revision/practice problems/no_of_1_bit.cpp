#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    int count1 = 0;
    int count0 = 0;
    for(int i = 0;n!=0;i++){
        if(n%2==1){
        count1++;
        
        }
        else{
         count0++;
        }
        n=n/2;
    }
    cout<<"Number of 1 bite is -> "<<count1<<endl;
    cout<<"Number of 0 bite is -> "<<count0<<endl;

    return 0;
}
