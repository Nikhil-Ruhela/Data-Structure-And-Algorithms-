#include<iostream>
using namespace std;
void update1(int& n){
    n++;
} 
int& func(int m){  //not a good practice
    int num = m;
    int& ans = num;
    return ans;
}
int main(){
    int a = 5;
    // create a refrence variable;
    int &b = a;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    b++;
    cout<<a<<endl;
    update1(a);
    cout<<a<<endl;
    
    


    return 0;
}