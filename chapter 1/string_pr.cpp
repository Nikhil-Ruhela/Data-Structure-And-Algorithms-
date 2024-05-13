#include<iostream>
using namespace std;

int main(){
    // problam 1
  /*  string str;
    cout<<"enter your name"<<endl;
    getline(cin ,str,'e');
    cout<<"your name is "<<str<<endl;*/

//   problam 2

    /*string str ="NikhilRuhela";
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<endl;
    }*/
        // "OR"

    string str ="NikhilRuhela";
        for(char x : str){
            cout<<x<<endl;
        }

    
    return 0;
}