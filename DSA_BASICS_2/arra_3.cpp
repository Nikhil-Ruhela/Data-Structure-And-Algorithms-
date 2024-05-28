#include<iostream>
using namespace std;

int getsum(int arr[] , int n){
    int sum = 0;
    for(int i = 0; i<n;i++){
            sum = arr[i] + sum;
        }
    
    return sum;
}
int main(){
    int  size;
    cout<<"enter the size"<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter the value of elements of arra"<<endl;

    for(int i = 0 ; i < size ; i++){
    cin>>arr[i];
    }
    cout<<"the sum of all elements is\t"<<getsum(arr , size)<<endl;

    return 0;
}