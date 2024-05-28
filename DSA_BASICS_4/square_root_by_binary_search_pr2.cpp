#include<iostream>
using namespace std;

double squrroot(double n){
    double ans = -1;
    double start =0;
    double end = n;
     long double mid = start + (end -start)/2;
    for(int i=0;start <= end;i++){
         
         long double square = mid*mid;
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
    double number ;
    cout<<"Enter your no."<<endl;
    cin>>number;
    cout<<"squrroot of given no. is "<<squrroot(number);
    return 0;
}