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

// for binary search tree , output of inorder function is in accending order
void *inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}

int isBST(node* root){
     static node* prev = NULL;     
    if(root!=NULL){
       if(!isBST(root->left)){
        return 0;
       }
       if(prev != NULL && root->data <= prev->data){
        prev = root;
       
       }
       prev = root;
       return isBST(root->right);
    }
    else{
        return 1;
    }
    }


int main(){
  
     node *p  = new node(5);
     node *p1 = new node(3);
     node *p2 = new node(6);
     node *p3 = new node(1);
     node *p4 = new node(4);

   
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    
    inorder(p);
    cout<<endl;
    cout<<isBST(p);
    return 0;
}