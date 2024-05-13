
#include<iostream>
using namespace std;


 int findunique(int arr[],int size){
    int ans = 0;
    
    for(int i = 0;i<size; i++){
    ans = ans^arr[i];
   }
//    return ans;
cout<<ans;
 }
int main(){
    int arr[10] = {1,2,1,3,4,2,5,3,5};
    // cout<<findunique(arr , 10);
    findunique(arr , 10);

    

    return 0;
}