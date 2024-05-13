#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight = w;
    }
};

class male :public Human{

public:
string color;

void sleep(){
    cout<<"male is sleeping"<<endl;
}

};


int main(){
    male object1;
    cout<<object1.age;

    return 0;
}