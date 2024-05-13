#include<iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
};
 // function of creating min heap from an array
       
       void Min_heap(int arr[] , int size){
            // int largest = i;
            // int left = 2*i +1;
            // int right = 2*i + 2;

            for(int i = size/2;i>0;i--){
                int left = 2*i +1;
                int right = 2*i + 2;
                
                if(left < size && arr[i] > arr[left]){
                    swap(arr[i] , arr[left]);
                    i = left;
                    return ;
                }
                if(right < size && arr[i] > arr[right]){
                    swap(arr[i] , arr[right]);
                    i = right;
                    return ;
                }
            }             
       }
int main(){
    heap h;

    int arr[5] = {54, 53, 55, 52, 50};
    
    for(int i = 5/2;i>0;i--){
        Min_heap(arr, 5, i);
    }
    
    
    cout<<"Printing the array now "<<endl;
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}