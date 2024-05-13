#include<iostream>
using namespace std;

int main(){
    int year_of_service , salary , bonous ;
    
    cout<<"Enter year of service"<<endl;
    cin>>year_of_service;
    cout<<"Enter salary"<<endl;
    cin>>salary;

    bonous = salary*0.05;
    
    if(year_of_service > 5){
        salary = salary + bonous;
        cout<<"your total salary is "<<" ";
        cout<<salary<<endl;
    }
    else {

    cout<<"your total salary is "<<" ";
    cout<<salary<<endl;
    }

    return 0;
}