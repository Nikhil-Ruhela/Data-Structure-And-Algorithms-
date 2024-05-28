/* Basic intro of heap
-> it is a complet binary tree that comes with a heap order property

=> Heap order property
1 -> Max heap : child node is always less then parent node
2 -> Min heap : child node is always greater then parent node

Insertation:
if node present at i^th index then 
1-> its left node is present at 2*i index
2-> its right node is present at (2*i + 1) index
3-> parent node of a child node(index i) is present at i/2
*/


#include <iostream>
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

    // Function to insert in heap
    void insert(int val)
    {

        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // function to delete from heap(delete root node)  , time complexity is o(log(n))
    void delete_from_heap()
    {
        if (size == 1)
        {
            cout << "Nothing to delete " << endl;
            return;
        }
        //    step 1: put last element into first index
        arr[1] = arr[size];
        //    step 2: remove last element
        size--;
        //    step 3: take root node to its correct position
        int i = 1;
        while (i <= size)
        {
            int leftnode = 2 * i;
            int rightnode = 2 * i + 1;
            if (arr[i] < arr[leftnode] && leftnode < size)
            {
                swap(arr[i], arr[leftnode]);
                i = leftnode;
            }
            else if (arr[i] < arr[rightnode] && rightnode < size)
            {
                swap(arr[i], arr[rightnode]);
                i = rightnode;
            }
            else
            {
                return;
            }
        }
    }

    //    function of heapify Algorithm , leaf node index = (n/2 +1) to n
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

//    funcrion to sort heap element , time complexity = O(nlog(n))

    void heapsort(int arr[],int n){
        int size = n;
        while(size >1){
        swap(arr[1] , arr[size]);
        size--;

        heapify(arr , size , 1);

        } 
    }


    // Function to print heap element
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.delete_from_heap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // heap creaetion
    for(int i = n/2;i>0;i--){
        h.heapify(arr, n, i);
    }
    cout<<"Printing the array now "<<endl;
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // heapsort
    h.heapsort(arr , n);

    cout<<"Printing the sorted array now "<<endl;
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"Using priority Queue here:"<<endl;

//    max heap
    priority_queue<int>pq;
    
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element at top "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at top "<<pq.top()<<endl;
    cout<<"Size is "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"pq is empty "<<endl;
    }
    else{
        cout<<"pq is not empty "<<endl;

    }
    

    // min heap
    priority_queue<int,vector<int>,greater<int>>minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"Element at top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Element at top "<<minheap.top()<<endl;
    cout<<"Size is "<<minheap.size()<<endl;
    if(minheap.empty()){
        cout<<"pq is empty "<<endl;
    }
    else{
        cout<<"pq is not empty "<<endl;

    }
    return 0;
}