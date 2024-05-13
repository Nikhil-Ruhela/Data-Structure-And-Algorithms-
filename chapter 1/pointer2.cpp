#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
  /* int arr[] = {1,2,3,4};
    int *ptr = arr ; 
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr+4<<endl;
    cout<<*ptr+3<<endl;
    cout<<*(ptr+1)<<endl;*/


    
    cout<<a<<endl;
    cout<<*(&a)<<endl;
    cout<<ptr<<endl;
    cout<<ptr+5<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr+5<<endl;
    cout<<*(ptr+5)<<endl;

    cout<<(sizeof *ptr)<<endl;
    cout<<(sizeof ptr)<<endl;

    



    return 0;
}  