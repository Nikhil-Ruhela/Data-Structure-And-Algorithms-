#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
   /*/ int arr[]={34,5,34,33,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    sum = accumulate(arr,arr+n,sum);
    cout<<sum<<endl;
    return 0;
}*/


    vector<int> v {43,54,33,23,53};
    
    int sum =0;
    
    sum = accumulate(v.begin() ,v.end() ,sum);
    cout<<sum<<endl;
    return 0;
}