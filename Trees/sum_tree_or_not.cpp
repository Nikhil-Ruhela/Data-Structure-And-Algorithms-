#include<iostream>
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
pair<bool,int> isSumTree(node* root){
    // null node
    if(root == NULL){
        pair<bool,int>p = make_pair(true , 0);
        return p;
    }
    // leaf node
    if(root->left == NULL && root->right == NULL){
        pair<bool,int>p = make_pair(true , root->data);
        return p;
    }
    pair<bool,int> leftans = isSumTree(root->left);
    pair<bool,int> rightans= isSumTree(root->right);
    
    bool left = leftans.first;
    bool right = rightans.first;

    bool cond = root->data == leftans.second + rightans.second;

    pair<bool,int>ans;
    if(left && right && cond){
        ans.first = true;
        ans.second = 2*root->data;
    }
    else{
        ans.first = false;
    }
    return ans;
}
int main(){
    node* root = NULL;           // 3 2 -1 -1 1 -1 -1
    root = buildtree(root);      // 1 2 -1 -1 3 -1 -1
    cout<<endl;    
    cout<<isSumTree(root).first;
    return 0;
}