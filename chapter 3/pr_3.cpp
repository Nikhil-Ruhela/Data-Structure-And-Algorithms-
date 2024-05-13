#include<iostream>
using namespace std;

int main(){
    int n , first_num , second_num , third_num , forth_num , reverse;
    cout<<"Enter number"<<endl;
    cin>>n; //1234
    forth_num = n%10; //4
    third_num = (n-forth_num)%100; //3
    second_num = (n - ((third_num*10) + (forth_num)))%1000; //2
    first_num = (n - ((second_num*100) + (third_num*10) + (forth_num)))%10000; //1
    reverse =  ((forth_num*1000) + (third_num*100) + (second_num*10) + (first_num)) ;
    cout<<"The reverse of given no. is"<<" ";
    cout<<reverse<<endl;
    return 0;
}