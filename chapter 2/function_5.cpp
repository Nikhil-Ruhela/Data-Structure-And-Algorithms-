#include<iostream>
using namespace std;
void print(int id , string name ="NA" , string addr = "NA" ){
    cout<<"ID no. is"<<id<<endl;
    cout<<"Name is"<<name<<endl;
    cout<<"address is"<<addr<<endl;
}

int main(){
    print( 83,"nikhil" , "laxmangarh");
    cout<<endl;
    print( 3,"ruhela" );
    cout<<endl;
    print( 8 );
    return 0;
}
