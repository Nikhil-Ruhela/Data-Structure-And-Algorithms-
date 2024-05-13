#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}
bool binary_search(int *arr, int s , int e, int key){
    print(arr,s,e);
    
    if(s>e){
        return false;
    }
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            return true;
        }

        if(arr[mid]<key){
          return  binary_search(arr , mid+1 , e , key);

        }
        else{
          return  binary_search(arr , s , mid-1 , key);
            
        }
    
}
int main(){
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;
    int key = 20;
    cout<<"Present or not "<<binary_search(arr,0,5,key)<<endl;
    
    return 0;
}