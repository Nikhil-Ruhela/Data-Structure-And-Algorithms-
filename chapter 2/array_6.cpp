#include<iostream>
using namespace std;
double average(int arr[] , int n){
    int sum ;
    for(int i= 0 ; i<n;i++){
     sum = sum + arr[i];
    
    }
    return sum/double(n);

}
int main(){
    int n;
    cout<<"Enter value of n"<<" ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The avarage of arraya element is"<<" ";
    cout<<average( arr,  n);
    

    return 0;
}