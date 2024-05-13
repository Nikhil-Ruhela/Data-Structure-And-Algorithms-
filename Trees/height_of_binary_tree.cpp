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
int height(node* root){
    if(root == NULL){
        return 0;
    }
     
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left , right) + 1;
    return ans;     
}                      
int main(){
    node* root = NULL;           // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 9 8 -1 -1 -1 -1
    root = buildtree(root);

    cout<<"The maximum height of tree is: "<<height(root);
    
    return 0;
}