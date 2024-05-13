#include<iostream>
using namespace std;

class node{
    public:
       int data;
       struct node* left;
       struct node* right;

       node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
       }
};
void *preorder(node* root){
    if(root != NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void *postorder(node* root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";

    }
}
void *inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


int main(){
   
     node *p  = new node(4);
     node *p1 = new node(1);
     node *p2 = new node(6);
     node *p3 = new node(5);
     node *p4 = new node(2);

   
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preorder(p);
    cout<<endl;
    postorder(p);
    cout<<endl;
    inorder(p);

    return 0;
}