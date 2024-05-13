#include<iostream>
#include<array> //stl arra
using namespace std;

int main(){
    
    array<int,4>a = {1,2,3,4};
    int size = a.size();
    cout<<size<<endl;
    for(int i = 0 ;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element of 2nd index"<<a.at(2)<<endl;
        cout<<"Empty of not"<<a.empty()<<endl;
        cout<<"First Element"<<a.front()<<endl;
        cout<<"Last Element"<<a.back()<<endl;
        cout<<a[2]<<endl;
    return 0;
}