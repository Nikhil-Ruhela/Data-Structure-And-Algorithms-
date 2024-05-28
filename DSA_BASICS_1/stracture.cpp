#include<iostream>
using namespace std;

struct students{
    int sr_no;
    string rollNo;
    string name;
    double marks;
    };
int main(){
    students s = {1,"BT21EEE083","Nikhil Jaat",65};
    cout<<"sr_no = "<<s.sr_no<<endl<<"rollNo ="<<s.rollNo<<endl<<"name ="<<s.name<<endl<<"marks ="<<s.marks<<endl;
    return 0;
}