#include<iostream>
#include<queue>
#include<vector>
#include<map>
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

vector<int> top_view(node* root){
    
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    map<int,int>top_nodes;
    queue<pair<node* ,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<node* ,int>temp = q.front();
        q.pop();
        node* front_node = temp.first;
        int hd = temp.second;
        
        //  if one value is present for a hd , then do nothing
        if (top_nodes.count(hd) == 0){
            top_nodes[hd] = front_node->data;
        }
        if(front_node->left){
            q.push(make_pair(front_node->left,hd-1));
        } 
        if(front_node->right){
            q.push(make_pair(front_node->right,hd+1));
        }
    }

    for(auto i: top_nodes){
     ans.push_back(i.second);
    }
    return ans;
}
int main(){
    node* root = NULL;     
    root = buildtree(root);    

    cout<<"printing top view of binary tree :  "<<endl;
    vector<int>top_view_element = top_view(root);
    for(int num : top_view_element){
        cout<<num<<" ";
    }
    return 0;
}

