#include<iostream>
using namespace std;

void addmulti(int x ,int y , int *aptr , int *mptr){
    *aptr = x+y;
    *mptr = x*y;
}
int main(){
    int A = 10 ,B =20,P,S;
    addmulti(A,B,&P,&S);
    cout<<P<<endl<<S<<endl;
    return 0;
}