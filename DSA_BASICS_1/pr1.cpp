#include<iostream>
using namespace std;

int main(){
    
  int arr[] = {34,43,56,76,4,322,3};
  int res =arr[0];
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=1;i<n;i++){
    res =max(res , arr[i]);
    // cout<<res<<endl;
  }
    cout<<res<<endl;

    return 0;
}