//  we find kth smallest element using max heap and kth largest element using min heap 
// Method 1

#include<iostream>
using namespace std;

void heapify(int arr[] , int n, int i)
    {
       int largest = i;
       int left = 2*i;
       int right = 2*i + 1;

       if(left <= n && arr[largest] < arr[left]){
        largest = left;
       }
       if(right <= n && arr[largest] < arr[right]){
        largest = right;
       }
       if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr , n , largest);
       }
    }

//    function to sort heap element , time complexity = O(nlog(n))

    void heapsort(int arr[],int n){
        int size = n;
        while(size >1){
        swap(arr[1] , arr[size]);
        size--;

        heapify(arr , size , 1);

        } 
    }

    void kth_smallest(int arr[] , int n , int k){
         int size = n;
         heapsort(arr , size);
        
        cout<<"kth smallest element : "<<arr[k];
        return;
    }
// };
int main(){
    // heap h;

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    int k;
    cout<<"Enter value of k:"<<endl;
    cin>>k;
    kth_smallest(arr , n , k);
    return 0;
}



// Method 2

#include<iostream>
#include<queue>
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
void kth_Smallest_element(int arr[] , int r , int k){
    priority_queue<int>pq;

    // step 1

    for(int i = 1;i<=k;i++){
        pq.push(arr[i]);
    }

    // Step 2

    for(int i = k;i<=r;i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    // Step 3
    
    int ans = pq.top();
    cout<<ans;

}
int main(){
    heap h;
    int arr[6] = {-1,12,23,5,60,3};
    int size = 5;
    int k ;
    cout<<"Enter the value of k:"<<endl;
    cin>>k;
    kth_Smallest_element(arr,size,k);
    return 0;
}