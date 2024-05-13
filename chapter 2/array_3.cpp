#include<iostream>
using namespace std;

int check_if_shorted(int arr[] , int n){
    for(int i = 1 ; i < n ; i++){
        if(arr[i] < arr[i-1])
        return 0;
        }
        return 1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
        }
    
        if(check_if_shorted(arr , n) == 0)
            cout<<"Not sorted";

        else
            cout<<"Sorted";
        
    
    return 0;
}