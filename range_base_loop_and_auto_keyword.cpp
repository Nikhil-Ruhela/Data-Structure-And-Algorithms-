#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {2,4,6,8,10};

    //  RANGE BASED LOOPS
    for(int &value : v){  // the copy of element of vector is set in value so we use it by refrence
        cout<<value<<" ";
    }
    cout<<endl;

    // we can use it for pair
    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6},{7,8}};
    for(pair<int,int> &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }

    //  AUTO KEYWORD
   // auto keyword dinamicly determine the data type of a
   auto a = 1; 
   auto b = "Nikhil";
   cout<<a<<endl;
   cout<<b<<endl;

//    use of auto keyword in iterator
      vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6},{7,8}};
    //    vector<pair<int,int>> :: iterator it;  -> we dont have to write this statement if we use auto keyword
       for(auto it = v_p.begin(); it != v_p.end(); ++it){ 
       cout << it->first <<" "<<it->second<<endl;
       }

    return 0;
}