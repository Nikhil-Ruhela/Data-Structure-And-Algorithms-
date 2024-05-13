#include<iostream>
// #include"Hero.cpp"    //we can also include class in header file if we create class in other file
using namespace std;

// formation of class

class Hero    // class is a user define data type
{ 
    //properties of class

//  char name[100];
public:    // the property below this public  can access anywhere
 char level; 
//  private:  // the property below this private  can access only inside the class 
 int health;
// if class is empty then also 1 bite of memory is alloted
// we can excess any property of class by using ().)/(dot)

void print(){
    cout<<level<<endl;
}

};


int main(){
    // creation of object  
     Hero nikhil;
     nikhil.health = 100;
     nikhil.level = 'A';
     cout<<"size : "<<sizeof(nikhil)<<endl;
     cout<<"Health: "<<nikhil.health<<endl;
     cout<<"level: "<<nikhil.level<<endl;
    return 0;
}