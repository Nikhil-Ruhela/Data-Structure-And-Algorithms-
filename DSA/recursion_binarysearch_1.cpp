#include<iostream>
using namespace std;

bool is_shorted(int arr[], int size){
    if(size==0 ||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        
        return is_shorted(arr +1 , size - 1);
    }
}
int main(){
    int arr[5] = { 2,4,3,8,10};  
    int size = 5;

    bool ans = is_shorted(arr,size);
    if(ans){
        cout<<"Array is shorted "<<endl;
    }
    else
        cout<<"Array is not shorted "<<endl;

    return 0;
}