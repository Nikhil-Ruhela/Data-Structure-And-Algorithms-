/*
abstractions:
enables us to display only essential information while hiding implementation details

inheritance:
a class inherits properties of another class
protected key word : accessible in own class , parent class and derived class 
*/
#include<iostream>
using namespace std;

class parents{

    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

 class child1 : public parents{
        // x -> public
        // y -> protected
        // z -> accessible
    };

     class child2 : private parents{
        // x -> private
        // y -> private
        // z -> inaccessible
    };

     class child3 : protected parents{
        // x -> protected
        // y -> protected
        // z -> inaccessible
    };
int main(){
    
    return 0;
}