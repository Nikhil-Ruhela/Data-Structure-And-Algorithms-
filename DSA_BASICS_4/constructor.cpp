#include <iostream>
#include<string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;
    //    formation of static keyword
    // -> static keywoed create such a data member that belongs to class
    // -> to access that data member we dont have to make object
    // -> first we have to initialise the statis member and we initialise it outside the class
    static int timeTocomplet;
    Hero()
    { // defalt constructor
        cout << " simple constructor called " << endl;
        name = new char[100];
    }
    // parametreised constructor
    Hero(int healt)
    {
        // cout << "this ->" << this << endl;

        this->health = health;
    }
    Hero(int health, char level)
    {
        cout << "this ->" << this << endl;
        this->level = level;
        this->health = health;
        // the address of current is object is stored in 'this' keyword which implise 'This'is a pointer
    }

    // copy constructor
    Hero(Hero &temp)
    {   //different array for hero2 also called D-copy
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch , temp.name);
        this->name = ch;

        cout << "copy constructor called " << endl;
    //    this->name = temp.name;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Name " << this->name << ",";
        cout << "health " << this->health << ",";
        cout << "level " << this->level << endl;
    }
    // formation of getter
    int get_health()
    {
        return health;
    }
    char get_level()
    {
        return level;
    }

    // formation of setter
    void set_health(int h)
    {
        health = h;
    }
    void set_level(char ch)
    {
        level = ch;
    }
    void set_name(char name[]){
        strcpy(this->name,name); // strcpy is use to copy one string to other
    }

    // formation of static function
    // -> we can directly by class , it not need to create object
    // -> they dont heve this keyword
    // -> it can only access static member

    static int rendom(){
        return timeTocomplet ;
    }
    //  destructor call
   ~Hero(){
    cout<<"destructor call"<<endl;
   }

};
// initilisation of static member
// initilisation -> datatype , className , :: , fieldName , = , value
int Hero::timeTocomplet = 5;


int main()
{
    
//     cout<<Hero::timeTocomplet<<endl;
       cout<<Hero::rendom()<<endl;
// // we can also print like this but it is not sutable

// Hero a;
// cout<<a.timeTocomplet<<endl;

// Hero b;
// b.timeTocomplet = 10;
// cout<<a.timeTocomplet<<endl;
// cout<<b.timeTocomplet<<endl;









    // Hero Hero1;
    // Hero1.set_health(10);
    // Hero1.set_level('A');
    // char name[7]="Nikhl";
    // Hero1.set_name(name);
    // Hero1.print();

    // // default copy constructor
    // Hero Hero2(Hero1);
    // Hero2.print();

    // Hero1.name[0] = 'm';
    // Hero1.print();
    // Hero2.print();

    // Hero1 = Hero2;
    // Hero1.print();
    // Hero2.print();

    // //  destructor -> it is use to de-allocate memory
    // // for static allocation destructor automaticlly call but for dynamic allocation we have to manually call it
    // // static 
    // Hero a;

    // // dynamiclly

    // Hero *b = new Hero();
    // //   manually destructor call
    // delete b; 





    // // staticlly constructor call
    // Hero nikhil(100);
    // //    cout<<"address of Nikhil "<<&nikhil<<endl;
    // //    nikhil.get_health();
    // nikhil.print();

    // // Dynamically constructor call
    // Hero *b = new Hero;
    // b->print();
    // Hero jaat(2, 'A');
    // jaat.print();

    // // copy constructor
    // Hero s(100, 'a');
    // s.print();
    // Hero r(s);
    // r.print();
    return 0;
}