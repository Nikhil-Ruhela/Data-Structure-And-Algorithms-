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
node* buildtree_1(node* root){
    cout<<"Enter the data of first tree: "<<endl;
     int data;
     cin>>data;
     root = new node(data);
     if(data == -1){
        return NULL;
     }
     cout<<"Enter data for inserting in left of "<<data<<endl;
     root->left = buildtree_1(root->left);
     cout<<"Enter data for inserting in right of "<<data<<endl;
     root->right = buildtree_1(root->right);
     return root;
}

node* buildtree_2(node* root){
    cout<<"Enter the data of second tree: "<<endl;
     int data;
     cin>>data;
     root = new node(data);
     if(data == -1){
        return NULL;
     }
     cout<<"Enter data for inserting in left of "<<data<<endl;
     root->left = buildtree_2(root->left);
     cout<<"Enter data for inserting in right of "<<data<<endl;
     root->right = buildtree_2(root->right);
     return root;
}
bool isIdentical(node* root1 , node* root2){
    if(root1 == NULL && root2 == NULL){
        return 1;
    }
    if(root1->data == root2->data){
    bool left = isIdentical(root1->left , root2->left);
    bool right= isIdentical(root1->right , root2->right);
    }
    else{
        return 0;
    }
}
int main(){
     node* root1 = NULL;   
     node* root2 = NULL;        // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 9 8 -1 -1 -1 -1
    root1 = buildtree_1(root1);
    root2 = buildtree_2(root2);
    cout<<isIdentical(root1, root2);   // 1 2 -1 -1 3 -1 -1 1 2 -1 -1 3 -1 -1 
    return 0;
}