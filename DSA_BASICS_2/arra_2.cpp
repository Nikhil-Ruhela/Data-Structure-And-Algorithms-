#include<iostream>
using namespace std;

int getmax(int arr[] , int n){
    int max = INT64_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[] , int n){
    int min = INT64_MAX;
    for(int i = 0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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
    cout<<"the maximum value is\t"<<getmax(arr , size)<<endl;
    cout<<"the minimum value is\t"<<getmin(arr , size)<<endl;
    
    return 0;
}