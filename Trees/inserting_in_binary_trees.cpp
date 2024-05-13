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

int inserting_element_in_BST(node* root , int key){
           
        if(root->data < key){
           root = root->right;
           inserting_element_in_BST(root->right , key);
           root->left->data = key;
           return 1;
        }
        else if(root->data >key){
            root = root->left;
           inserting_element_in_BST(root->left , key);
           root->right->data = key;
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
    int k;
    cout<<"Enter the value to insert:"<<" ";
    cin>>k;
    inorder(p);
    cout<<endl;
    cout<<inserting_element_in_BST(p , k)<<endl;
    inorder(p);
    
    
    return 0;
}