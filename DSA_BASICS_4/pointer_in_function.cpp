#include<iostream>
using namespace std;

int get_sum( int arr[] , int n){
    cout<<"size "<<sizeof(arr)<<endl;  //size = 4 because it is pointer not complat arr
    int sum = 0; 
    for(int i =0 ;i<n;i++){
        sum +=arr[i];

    }
    return sum;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<get_sum(arr+5 ,5);
    return 0;
}