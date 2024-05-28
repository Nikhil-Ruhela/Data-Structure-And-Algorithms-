#include<iostream>
using namespace std;

int squrroot(int n){
    int ans = -1;
    int start =0;
    int end = n;
    long long int mid = start + (end -start)/2;
    for(int i=0;start <= end;i++){
         
        long long int square = mid*mid;
         if(square==n){
            return mid;
        }
        else if(square<n){
            ans = mid;
            start = mid+1;
        }
       else{
            end = mid -1;
          }
    
      mid = start + (end -start)/2;
        
    }
        return ans;

}
int main(){
    int number ;
    cout<<"Enter your no."<<endl;
    cin>>number;
    cout<<"squrroot of given no. is "<<squrroot(number);
    return 0;
}