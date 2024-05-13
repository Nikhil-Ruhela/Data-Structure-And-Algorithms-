#include<iostream>
using namespace std;

int partition(int *arr , int s , int e){
    int count = 0;
    int pivot = arr[s];
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);
   int i = s,j = e;
   while(i<pivotindex && j>pivotindex){
    while (arr[i]<=pivot)
    {
        i++;
    }
    while (arr[j]>pivot)
    {
        j--;
    }

    if(i<pivotindex && j>pivotindex){
      swap(arr[i++],arr[j--]);
    }
   }
   return pivotindex;
    }

void quick_sort(int *arr , int s , int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    

    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
    

}
int main(){
    int arr[10] = {5,4,1,0,8,2,3,7,9,6};
    int n = 10;
    
    quick_sort(arr,0 ,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}