#include<iostream>
#include<map>
using namespace std;

    // output of map "method 3"
      void print_map(map<int,string>&m){
        cout<<"Size of map: "<<" "<<m.size()<<endl;
        for(auto &output : m){
        cout<<output.first<<" "<<output.second<<endl;   
        }
      }
int main(){
    // map is print in sorted order
    // m[1] , m[2] ... they are all keys of map and they all are unique in map
    // time complixity of map is O(log(n))
    // if we use string as a key then its time complixity -> s.size()*log(n)
    map<int,string>m;
    m[1] = "Nikhil";
    m[4] = "Jaat";
    m.insert({3,"Ruhela"});
    // output of map "method 1"
    map<int,string>:: iterator it;
    for(it = m.begin();it !=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    // output of map "method 2"
    for(auto it = m.begin(); it != m.end(); ++it){ 
       cout << it->first <<" "<<it->second<<endl;
       }

    // to find any element in map we use find operetor
       auto find = m.find(3);
       if(find == m.end()){
        cout<<"No value crossponding to this key"<<endl;
       }
       else{
        cout<<(*find).first<<" "<<(*find).second<<endl;
       }

    //    to erase any key
    // method 1
    m.erase(3);
    // method 2
    m.erase(find);

    // to cleat the map 
    m.clear();

    print_map(m);

    return 0;
}