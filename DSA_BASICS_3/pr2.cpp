#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    
    // vector<int> v;
    vector<int> v(n,4);

    v.push_back(34);
    v.push_back(3434);
    v.push_back(3443);
    // for(int i=0;i<v.size();i++){
        // cout<<v[i]<<endl;
        for(auto x :v){
        cout<<x<<endl;

        }

// }

    return 0;
}