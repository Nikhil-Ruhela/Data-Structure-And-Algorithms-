#include<iostream>
#include<vector>
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

vector<int> left_view(node* root , vector<int>&ans, int level){
    
    if(root == NULL){
        return ans;
    }
   if(level == ans.size()){
    ans.push_back(root->data);
   }
   left_view(root->left , ans, level+1);
   left_view(root->right , ans, level+1);
   return ans;
}
int main(){
    node* root = NULL;     
    root = buildtree(root);    
    vector<int>ans;
    cout<<"printing left view of binary tree :  "<<endl;
    vector<int>left_view_element = left_view(root,ans,0);
    for(int num : left_view_element){
        cout<<num<<" ";
    }
    return 0;
}

