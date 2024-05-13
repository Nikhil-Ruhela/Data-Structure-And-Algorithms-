/*
ability of object/methods to take different forms
compile time polymorphism: function overloading
define a number of function with same function name but they perform differently 
according to the arguments pass
Run time polymorphism : 
resolved at runtime
this is done using function overriding
function overriding is done when our child class define a function of parent class

*/
#include<iostream>
using namespace std;

class sum{
public:

void add(int x , int y){
    int sum = x+y;
    cout<<"sum is "<<sum<<endl;
}

void add(int x , int y ,int z){
    int sum = x+y+z;
    cout<<"sum is "<<sum<<endl;
}

void add(double x , double y){
    double  sum = x+y;
    cout<<"sum is "<<sum<<endl;
}

};


int main(){
    sum s;
    s.add(2,4);
    s.add(2,3,4);
    s.add(2.4,4.2);
    return 0;
}