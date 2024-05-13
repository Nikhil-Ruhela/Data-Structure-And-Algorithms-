#include<iostream>
using namespace std;

int main(){
    char ch ;
    cout<<"Enter the number"<<endl;
    cin>>ch;

    if(ch>= 'a' && ch<='z'){
        cout<<"it is lower case"<<endl;

    }
    else if(ch>= 'A' && ch<='Z'){
        cout<<"it is upper case"<<endl;

    }
    else if(ch>='0' && ch<='9'){
        cout<<"it is no. between 0 to 9"<<endl;
    }
    // else
    // cout<<"error"<<endl;
    return 0;
}