#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    for(auto x : v);
}
int main(){
    vector<int>v;

    for(int i=0;i<100;i++){
        v.push_back(i);
        cout<<v[i]<<endl;
    }
    return 0;
}