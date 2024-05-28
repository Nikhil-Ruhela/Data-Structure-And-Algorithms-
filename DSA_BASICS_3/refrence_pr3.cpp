#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a{10,20,30,40,50};
    for(auto &x : a){
        x = x +5 ;
        for(auto &x : a){
            
        }
            cout<<x<<endl;

    }
    return 0;
}