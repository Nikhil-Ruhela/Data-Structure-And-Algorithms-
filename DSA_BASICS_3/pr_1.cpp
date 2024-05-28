
// #include<typeinfo>
#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
    auto a = 10;
    auto b = 'a';
    cout<<a<<endl<<b<<endl<<typeid(a).name()<<endl<<typeid(b).name()<<endl;
    
    return 0;
}