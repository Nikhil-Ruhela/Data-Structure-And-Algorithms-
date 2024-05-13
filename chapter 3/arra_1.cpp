#include<iostream>
using namespace std;
int printarra( int arr[], int size){
    for(int i =0; i<10; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
     int arr[10] = {1,2,3,4,5,4,6};
     printarra(arr ,10);
    
    int size = sizeof(arr)/sizeof(int);
    cout<<size;
     return 0;
}