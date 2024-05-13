#include<iostream>
using namespace std;
#include<set>

int main(){
    
    set<int>s;
     
     s.insert(2);
     s.insert(2);
     s.insert(3);
     s.insert(4);
     s.insert(6);
     s.insert(3);
     s.insert(4 );
     s.insert(8);
     s.insert(8);
     s.insert(8);
     s.insert(6);
     s.insert(9);
     s.insert(9);


     for(auto i:s){
        cout<<i<<endl;
     }
     cout<<endl<<endl;

     set<int>:: iterator  it = s.begin();
     it++;  // for 2nd element
     it++;  //for 3rd elemect .... and so on
     
     s.erase(it);

     for(auto i:s){
        cout<<i<<endl;
     }

     cout<<endl<<endl;
     cout<<"6 is present or not --> "<<s.count(6)<<endl;
     cout<<"-6 is present or not --> "<<s.count(-6)<<endl;

     set<int>:: iterator itr = s.find(6);
     
     for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;


     }
cout<<endl;
    return 0;
}