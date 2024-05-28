#include<iostream>
using namespace std;

void reverse_string(string &str,int s , int e){

   if(s>e){
        return ;
    }
    swap(str[s],str[e]);
    //  s++;
    //  e--;
       reverse_string(str ,s+1,e-1);    
}
int main(){
    string name = "nikhil";   
    reverse_string(name , 0,name.length()-1);
    cout<<name<<"" ;
    return 0;
}