#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> printadjacency(int n , int m , vector<vector<int>>&edge){
      vector<vector<int>>ans;
      for(int i = 0; i<m ; i++){
        int u = edge[i][0];
        int v = edge[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
      }

      vector<vector<int>>adj(n);
      for(int i = 0;i<n;i++){
        adj[i].push_back(i);

        // entering neigghbour

        for(int j = 0;j<ans[i].size(); j++){
            adj[j].push_back(ans[i][j]);
        }
      }
      return adj;

      }

       
    
int main(){
  int node = 4;
  // cout<<"Enter the no. of nodes"<<endl;
  // cin>>node;
  int edges = 3;
  // cout<<"Enter the no. of edges"<<endl;
  // cin>>edges;
  vector<vector<int>>edge = {{0, 1}, {1, 2}, {2, 3}};
  // cout<<"Enter the edge list "<<endl;

  // for(int i = 0; i<node;i++){
  //   for(int j = 0;j<2;j++){
  //     cin>>edge[i][j];
  //   }
  // }


    vector<vector<int>> result = printadjacency(node , edges ,edge );

    for (int i = 0; i < node; i++) {
        cout << "Node " << i << " is connected to: ";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}