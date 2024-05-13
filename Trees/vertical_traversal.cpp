#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class node{
    public:
       int data;
       node* left;
       node* right;

       node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
       }
};                                         

node* buildtree(node* root){
    cout<<"Enter the data: "<<endl;
     int data;
     cin>>data;
     root = new node(data);
     if(data == -1){
        return NULL;
     }
     cout<<"Enter data for inserting in left of "<<data<<endl;
     root->left = buildtree(root->left);
     cout<<"Enter data for inserting in right of "<<data<<endl;
     root->right = buildtree(root->right);
     return root;
}

vector<int> verticleOrder(node* root){
    map<int,map<int,vector<int>>>nodes;
    queue<pair<node* , pair<int,int>>>q;
    vector<int>ans;
    if(root == NULL){
        return ans;
    }

    q.push(make_pair(root,make_pair(0,0)));

    while(!q.empty()){
        pair<node* , pair<int,int>>temp = q.front();
        q.pop();
        node* front_node = temp.first;
        int hd = temp.second.first;
        int level = temp.second.second;
         
        nodes[hd][level].push_back(front_node->data);
        if(front_node->left){
            q.push(make_pair(front_node->left,make_pair(hd-1 , level+1)));
        } 
        if(front_node->right){
            q.push(make_pair(front_node->right,make_pair(hd+1 , level+1)));
        }
    }

    for(auto i: nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}

int main(){
    node* root = NULL;     
    root = buildtree(root);    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"printing node of tree by vertical traversal:  "<<endl;
    vector<int>verticle_elements = verticleOrder(root);
    for(int num : verticle_elements){
        cout<<num<<" ";
    }
    return 0;
}