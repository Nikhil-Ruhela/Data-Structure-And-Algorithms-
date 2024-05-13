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

node* lca(node* &root , int n1 , int n2 ){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }

    node* leftAns = lca(root->left , n1 , n2);
    node* rightAns = lca(root->right , n1 , n2);

    if(leftAns != NULL && rightAns != NULL){
        return root;
    }
    else if(leftAns != NULL && rightAns == NULL){
        return leftAns;
    }
    else if(leftAns == NULL && rightAns != NULL){
        return rightAns;
    }
    else{
        return NULL;
    }

}
int main(){
    node* root = NULL;   
    root = buildtree(root);
    int n1 ,n2;
    cout<<"Ente the value of n1:"<<" ";
    cin>>n1;
    cout<<"Ente the value of n2:"<<" ";
    cin>>n2;
    node* ancestor_element =  lca(root , n1 , n2);
    cout<<ancestor_element->data;
    
    return 0;
}