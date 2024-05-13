#include<iostream>
using namespace std;

int peak_mountain(int arr[] , int size){
    int start =0;
    int end = size-1;
    int mid = start + (end -start)/2;
    for(int i=0;start<end;i++){
        if(arr[mid]<arr[mid+1]){
        start = mid +1;
        }
        else{
        end = mid;
        }
       mid = start + (end -start)/2;

    }
    return start;
}
int main(){
    int arr[9] = {1,2,3,4,5,6,7,3,2};
    cout<<"The peak value is at index \t"<<peak_mountain(arr ,9)<<endl;
    return 0;
}