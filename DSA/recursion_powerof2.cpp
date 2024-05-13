#include<iostream>
using namespace std;
#include<math.h>
int get_power(int n){

    if(n==0){
        return 1;
    }
    
    int lower_no = pow(2,(n-1));
    int upper_no = 2*lower_no;
    
    return upper_no ;

}
int main(){
      int n;
      cout<<"Enter the value of n"<<endl;
      cin>>n;
      
      int ans = get_power(n);
      cout<<"Ans is "<<ans<<endl;
    //   cout<<"Ans is "<<pow(2,n)<<endl;


    return 0 ;
}