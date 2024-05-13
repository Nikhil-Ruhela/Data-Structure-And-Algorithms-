#include<iostream>
#include<vector>
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
    void LeftTraversal(node* root , vector<int> & ans){
         if(root == NULL || root->left == NULL && root ->right == NULL){
            return;
         }
         ans.push_back(root->data);
         if(root->left){
             LeftTraversal(root->left , ans);
         }
         else{
            LeftTraversal(root->right , ans);
         }
      
    }

    void leafNodeTraversal(node* root , vector<int> &ans){
        if(root == NULL){
            return ;
        }
        if(root->left == NULL && root ->right == NULL){
            ans.push_back(root->data);
            return ;
        }
        leafNodeTraversal(root->left , ans);
        leafNodeTraversal(root->right , ans);
    }
    void rightTraversal(node* root , vector<int> &ans){
        if(root == NULL || root->left == NULL && root ->right == NULL){
            return;
         }
         if(root->right){
            rightTraversal(root->right , ans);
         }
         else{
            rightTraversal(root->left , ans);
         }
         ans.push_back(root->data);
    }
vector<int> boundary_traversal(node* root){
 vector<int>ans;
 if(root == NULL){
    return ans;
 }
    ans.push_back(root->data);
    // left part print
  LeftTraversal(root->left , ans);
//   print leafnode at left part
  leafNodeTraversal(root->left , ans);
//   print leafnode at right part
  leafNodeTraversal(root->right , ans);
//   right part print
  rightTraversal(root->right , ans);

}
int main(){
    node* root = NULL;     
    root = buildtree(root);   

    cout<<"printing the boundary node of tree:  "<<endl;
    vector<int> output =  boundary_traversal(root);
    for(int num : output){
        cout<<num<<" ";
    }
    return 0;
}