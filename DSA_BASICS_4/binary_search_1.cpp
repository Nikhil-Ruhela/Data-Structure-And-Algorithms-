#include<iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){
    int start =0;
    int end = size-1;
    int mid = (start + end)/2;
    for(int i=0;start<=end;i++){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;

        }
        else{
          end = mid - 1;
        }
        mid = (start + end)/2;
        
    }
            return -1;
    
}
int main(){
    int even[6] = {2,3,4,5,6,8};
    int odd[5] = {1,3,5,7,9};
    int key = 4;
    int Evenindex = binarysearch(even,6,10);
    int Oddindex = binarysearch(odd,5,10);
    cout<<"The Evenindex of 10 is"<<Evenindex<<endl;
    cout<<"The Oddindex of 10 is"<<Oddindex<<endl;

    return 0;
}