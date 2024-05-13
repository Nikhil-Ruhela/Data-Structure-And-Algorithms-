#include<iostream>
#include<string.h>
using namespace std;
    int strcmp(const char* s1 , const char* s2);
    

int main(){
    const char *s1="sasd";
    const fchar *s2="fdss";
    int res = strcmp(s1 ,s2);
    

    if(res>0){
        cout<<"greater"<<endl;
    }
    else if(res ==0){
        cout<<"same"<<endl;
    }
    else {
        cout<<"same"<<endl;
    }

    return 0;
}