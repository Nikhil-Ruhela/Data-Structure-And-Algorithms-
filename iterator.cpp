#include<iostream>
#include<vector>
using namespace std;

int main(){
    // //iterator of vector
    // vector<int>v = {2,4,6,8,10};
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // vector<int> :: iterator it = v.begin();  // initialise of iterator
    // vector<int> :: iterator itn = v.end();
    // cout<<(*(it+1))<<endl;   // output of iterator , by applying (*(it+1)) it will print element of next index
    // cout<<(*(itn-1))<<endl;  // by applying (*(itn-1)) it will print element of previous index
    // for(it=v.begin();it !=v.end();it++){
    //     cout<<(*it)<<" ";
    //    }

       // iterator of pair
       vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6},{7,8}};
       vector<pair<int,int>> :: iterator it;
       for(it = v_p.begin(); it != v_p.end(); ++it){
       cout << (*it).first <<" "<<(*it).second<<endl;  // this line and line below have same meaning
       cout << it->first <<" "<<it->second<<endl;
       }
    return 0;
}