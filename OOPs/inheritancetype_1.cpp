/*
type of inheritance:
(1) single
(2) multiple
(3) multilevel
(4) hierarchica
(5) hybrid
*/
#include<iostream>
using namespace std;

class parent1{
    public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
};

// class parent2{
//     public:
//     parent2(){
//         cout<<"parent2 class"<<endl;
//     }
// };

// class child:public parent1,parent2{
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };

class child1:public parent1{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2:public parent1{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};

int main(){
    
    child1 c;
    child2 a;
    return 0;
}