#include<iostream>
using namespace std;

int main(){
     int n,m,count =1;
    cout<<"Enter no. of rows"<<endl;
    cin>>n;
    cout<<"Enter no. of columb"<<endl;
    cin>>m;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}