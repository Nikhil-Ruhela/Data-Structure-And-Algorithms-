#include<iostream>
#include<vector> 
using namespace std;

void power_set(vector<int>num ,vector<int> output , int index , vector<vector<int>>&ans ){
    if(index >= num.size() ){
        ans.push_back(output);
        return;
    }

    // exclude

    power_set(num,output,index+1,ans);

    // include
   int element = num[index];
   output.push_back(element);
    power_set(num,output,index+1,ans);
   
}
int main(){
    vector<vector<int>>ans;
    vector<int>num = {1,2,3};
    vector<int>output ;
    int index = 0;
    power_set(num , output ,index,ans);

    for(int i=0;i<ans.size();i++){
            cout<<"{";

        for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j];
        }
        cout<<"}"<<endl;

        
    }
    return 0;
     

}