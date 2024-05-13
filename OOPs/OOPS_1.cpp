#include<iostream>
using namespace std;

 class fruits{
  public:
    string name;
    string color;

 };
 
 
int main(){
    
    fruits apple; //object
    apple.name = "apple";
    apple.color = "red";
    cout<<"Name : "<<apple.name<<endl;     
    cout<<"Color : "<<apple.color<<endl;     
     
   fruits*mango = new fruits();    
   mango->name = "Mango";
   mango->color = "yellow";
   cout<<"Name : "<<mango->name<<endl;
   cout<<"Color : "<<mango->color<<endl;

    return 0;
}