#include<iostream>
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
// formation of getter
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

int main(){
    // static allocation
    Hero a;
    a.set_health(70);
    a.set_level('A');
    cout<<"level is "<<a.level <<endl;
    cout<<"health is "<<a.get_health() <<endl; 

    // Dynamically allocation
    Hero *b = new Hero;
    b->set_health(100);
    b->set_level('N');
    cout<<"level is "<<(*b).level <<endl;
    cout<<"health is "<<(*b).get_health() <<endl; 
    //    or
    cout<<"level is "<<b->level <<endl;
    cout<<"health is "<<b->get_health() <<endl; 
    return 0;
}