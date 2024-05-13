#include <iostream>
using namespace std;

class Hero
{
private:
    int health; 

public:
    char level;
    void print()
    {
        cout << level << endl;
    }
    // getter and setter-> the function inside the class by which we can access the peivate property outside the class
    // getter is use for search ,in setter we can apply any conditions such as we can use it as a possword 
    // Formation of getter 
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }

    // formation of setter
    void set_health(int h){
        health = h;
    }
    void set_level(char ch){
        level = ch;
    }
};

int main()
{
    Hero nikhil;
    // use of getter
    cout<<"Nikhil health is "<<nikhil.get_health()<<endl;
    // use of setter
    nikhil.set_health(70);
    cout<<"Nikhil new health is "<<nikhil.get_health()<<endl;
 
    return 0;
}