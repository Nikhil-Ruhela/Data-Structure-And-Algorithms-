#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<"lower_case"<<endl;

    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"upper_case"<<endl;
    }
    else
    cout<<"Not a character"<<endl;
    return 0;
}