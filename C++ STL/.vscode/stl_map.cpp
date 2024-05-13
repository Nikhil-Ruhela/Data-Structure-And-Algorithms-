#include<iostream>
using namespace std;
#include<map>
int main(){
    
    map<int , string>m;

    m[1]="Nikhil";
    m[2]="Kumar";
    m[3]="Ruhela";
    m.insert({4,"Jaat"});
    m.insert({5,"100"});
    m.insert({8,"biga"});
    m.insert({6,"jemin"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<endl;

    cout<<"finding 3 "<<m.count(3)<<endl;

    cout<<"After erase"<<endl;
    m.erase(2);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }cout<<endl<<endl;

    auto it = m.find(5);

    for(auto i= it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
  
    return 0;
}