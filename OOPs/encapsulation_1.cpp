 /*
    it shows binding of methods and variables together into a single unit(class)
    data is only accessible from the class method
    it also leade to data abstraction/hiding because of this class is called as abstract data type
    
    */
#include<iostream>
using namespace std;

class abc{
    int x;

     
     public:
      void set(int n){
        x=n;
      }
      int get(){
        return x;
      }
};
int main(){
    abc obj1;
    obj1.set(5);
    cout<<obj1.get()<<endl;
    return 0;
}