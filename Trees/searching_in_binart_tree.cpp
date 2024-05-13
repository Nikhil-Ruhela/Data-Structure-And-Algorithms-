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

void *inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}

int searching_element_in_BST(node* root , int key){
    

     while(root != NULL){
         if(key == root->data){
        return 1;
     }
        if(root->data > key){
           root = root->left;
        }
        else{
            root = root->right;
        }
     }
     return 0;
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
    int k;
    cout<<"Enter the value to check:"<<" ";
    cin>>k;
    inorder(p);
    cout<<endl;
    cout<<searching_element_in_BST(p , k)<<endl;
    
    if(searching_element_in_BST(p,k)){
        cout<<"Element is presnet in this BST and the elemet is:"<<k;
    }
    else{
        cout<<"Element is not present in this BST"<<endl;
    }
    return 0;
}