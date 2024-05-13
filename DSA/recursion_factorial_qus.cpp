#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
    return 1;
    int small_no = factorial(n-1);
    int large_no = n*small_no;
    return large_no ;
    

}
int main(){
      int n;
      cout<<"Enter the value of n "<<endl;
      cin>>n;
      cout<<factorial(n)<<endl;
    return 0;
}