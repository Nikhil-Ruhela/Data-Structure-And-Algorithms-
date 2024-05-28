#include<iostream>
using namespace std;

int main(){
    string str ="nikhilruhela";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    str =str  + "jaat";
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    cout<<str.find("ikh");
    return 0;
}