#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int>first_negative_integer(int *arr, int n , int k){
  deque<int>dq;
  vector<int>ans;

// process first window for k size

  for(int i=0; i<k;i++){
    if(arr[i]<0){
        dq.push_back(i);
    }
  }
  // store ans for first k size window

  // if(dq.size()>0){
    if(!dq.empty()){
    ans.push_back(arr[dq.front()]);
  }
  else{
    ans.push_back(0);
  }
  // processing for remaining windows

  for(int i=k; i<n;i++){
    // removal
    if(!dq.empty() && (i-dq.front() >= k)){
      dq.pop_front();
    }
    // addition
    if(arr[i]<0){
      dq.push_back(i);
    }

  // store ans 

  if(dq.size()>0){
    ans.push_back(arr[dq.front()]);
  }
  else{
    ans.push_back(0);
  }
  }
  return ans;
}

int main(){
  // deque<int>dq;
  
  // int n;
  // int arr[n];
  // cout<<"Enter the size of array: "<<" ";
  // cin>>n;
  // cout<<endl;
  // cout<<"Enter the Element of array: "<<" ";
  // for(int i=0;i<n;i++){
  //   cin>>arr[i];
  // }
  // int k;
  // cout<<"Enter the size of window: "<<" ";
  // cin>>k;

  int arr[] = {1,-2,3,4,5,-6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 2;

  vector<int>result = first_negative_integer(arr , n , k);
    cout<<"Output vector :"<<" ";
    for(int num : result){
      cout<<num<<" ";
    }
  cout<<endl;

    return 0;
}