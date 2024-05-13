#include<map>
#include<iostream>
using namespace std;

int main(){
    map<string,int>m;
    int n;
    cout<<"Enter value of n:"<<" ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s;
        cout<<"Enter"<<" "<<i+1<<"st"<<" "<<"string "<<endl;
        cin>>s;
        m[s]++;
    }
    cout<<"String and their frequency:"<<endl;
    for(auto &output : m){
        cout<<output.first<<" "<<output.second<<endl;   
        }
    return 0;
}