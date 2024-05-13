/*
method of parent class and method of child class must have same name
method of parent class and method of child class must have same parameters
it is possible through ingeritance only
*/
#include<iostream>
using namespace std;

class animal{
    public:
    void speak(){
      cout<<"speaking "<<endl;
    }
};
class dog : public animal{
    public:
    void speak(){
        cout<<"barking "<<endl;
    }
};


int main(){
    dog obj1;
    obj1.speak();
    return 0;
}