#include<iostream>
using namespace std;

int main(){
    int arr[5] {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0 ; i<n;i++){
        arr[i] = arr[i]*2;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}