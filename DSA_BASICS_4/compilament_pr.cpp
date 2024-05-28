#include<iostream>
using namespace std;

int compliment(int n){
    int m =n , ans;
    int mask = 0;

    for(int i = 0; m!=0;i++){
        mask = (mask << 1) | 1;
        m = m>>1;
     ans = (~n)&mask;
    }
    return ans;
}

int main(){
     int n;
     cout<<"Enter the no."<<endl;
     cin>>n;
     cout<<compliment(n)<<endl;
    return 0;
}