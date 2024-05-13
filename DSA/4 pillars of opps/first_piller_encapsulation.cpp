#include<iostream>
using namespace std;

class student{

private:

string name;
int age;
int height;

public :
int get_age(){
    return this->age;
}
};

int main(){
    // Encaplualtion -> wrapping up Data member and functions, it is also called data or information hiding
    // Fully Encaplualtion Class -> all data are private
    // if we want we can make class "Read Olny"

    student first;
    return 0;
}