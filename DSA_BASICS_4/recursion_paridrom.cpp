#include<iostream>
using namespace std;

bool check_palindrome(string &str,int s , int e){
  if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    else{
       check_palindrome(str ,s+1,e-1);    

    }  
}
int main(){
    
    string name ;   
    cout<<"Enter string "<<endl;
    cin>>name;
    bool ispalindrome = check_palindrome(name , 0,name.length()-1);
if(ispalindrome){
cout<<"It is palindrome"<<endl;
}
else{
cout<<"It is not palindrome"<<endl;

}

    // cout<<name<<"" ;
    return 0;
}