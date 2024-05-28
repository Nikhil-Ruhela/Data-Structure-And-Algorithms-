#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>num,vector<vector<int>>& ans,int index){
if(index >= num.size()){
ans.push_back(num); 
    return;
}

for(int j=index;j<num.size();j++){
    swap(num[index],num[j]);
    permutation(num ,ans,index);
    swap(num[index],num[j]);
}
}
int main(){
    vector<vector<int>>ans;
    vector<int>num;
    int index =0;
    permutation(num,ans,0);
    // for(int i=0;i<ans.size();i++){

    // for(int j=0;j<ans[index].size();j++){
    //     cout<<ans[i][j];
    //     }
    //     cout<<"}"<<endl;
    // }
    return 0;
}