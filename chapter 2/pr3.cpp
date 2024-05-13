#include<typeinfo>
#include<iostream>
using namespace std;

int main()
{
    char c = 'g';
    const char *s1 = "nikhil";
    string s2 = "course";
    cout<<typeid(char).name()<<endl;
    cout<<typeid(const char ).name()<<endl;
    cout<<typeid("nikhil").name()<<endl;

    return 0;
}