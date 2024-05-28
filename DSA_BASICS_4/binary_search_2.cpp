#include<iostream>
using namespace std;
int Firstoccurance(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start + (end -start)/2;
    int ans = -1;
    for(int i=0;start<=end;i++){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;

        }
        else if(key<arr[mid]){
          end = mid - 1;
        }
        mid = start + (end -start)/2;
        
    }
            return ans;
    
}

int Lastoccurance(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start + (end -start)/2;
    int ans = -1;
    for(int i=0;start<=end;i++){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(key>arr[mid]){
            start = mid+1;

        }
        else if(key<arr[mid]){
          end = mid - 1;
        }
        mid = start + (end -start)/2;
        
    }
            return ans;
    
}

int main(){
    
    int arr[10] = {1,1,1,2,2, 2,3,3,3,7};
    cout<<"First occurance of 3 is "<<" "<<Firstoccurance(arr ,10, 3)<<endl;
    cout<<"Last occurance of 3 is "<<" "<<Lastoccurance(arr ,10, 3)<<endl;
   
    return 0;
}