#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i=0;name[i] !='\0';i++){
    count ++;

    }
    return count;

}

void reverse(char name[] , int n){
int s = 0 ;
int e = n-1;
for(int i=0;s<e;i++){
    swap(name[s++] , name[e--]);
}
}
int main(){
    char name[10];
    cout<<"Enter ur name "<<endl;
    cin>>name;
    // name[3] = '\0';  //null character

            cout<<"your name is "<<name<<endl;
        
        int len = getlength(name);
    cout<<"length "<<getlength(name)<<endl;

    reverse(name , len);
    cout<<"Your name is"<<endl;
    cout<<name;

    return 0;
}