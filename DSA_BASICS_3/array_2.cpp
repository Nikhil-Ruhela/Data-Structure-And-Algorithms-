#include<iostream>
using namespace std;

int main(){
     int arr[5] {10,20,30,40,50};
     for(int &x : arr){
     x = x*2;
     }
     for(int x : arr){
        cout<<x<<endl;
     }
    return 0;
}