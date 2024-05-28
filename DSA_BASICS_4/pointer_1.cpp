#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,5,8,10,12,15,18};
    char ch[10] = "abcdefg";
    cout<<arr<<endl;  // print address of 0th index
    cout<<ch<<endl;   // print all character -> abcdefg
    char *c = &ch[2];
    cout<<c<<endl;     // print all character from index 2-> cdefg
    cout<<*c<<endl;   //print only first charactet of index 2 
    char temp = 'z';  
    char *p = &temp;  
    cout<<p<<endl;    //print z and then any element until it find nul element
    cout<<*p<<endl;   //print z 
   
    int *ptr = &arr[0];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    cout<<sizeof(*ptr)<<endl;
    cout<<arr[4]<<endl;
    cout<<4[arr]<<endl;
    cout<<*(4+arr)<<endl;
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr +1;
    cout<<ptr<<endl;

   
    return 0;
}