 /*
    used to initialize an object
    this is a function which is called when object is created
    it has same name as class name
    we can have multyple constructers in a  class
    condtructor are used to initilised any thing in class
    default constructor -> no argumect pass
    parameterised constructor ->arguments pass
    copy constructor -> initialise an object by another existing object
    */
#include<iostream>
using namespace std;

class rectangle{
    public:
    int l;
    int b;
    rectangle(){
        l=20;
        b=10;
 }

  rectangle(int x , int y){
    l=x;
    b=y;
  }
  rectangle(rectangle& r){
    l = r.l;
    b = r.b;
  }
  ~rectangle(){
    cout<<"destructor is called"<<endl;
  }
};
int main(){
    rectangle* r1 = new rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;
    rectangle r2(5,2);
    cout<<r2.l<<" "<<r2.b<<endl;
    rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;


    return 0;
}