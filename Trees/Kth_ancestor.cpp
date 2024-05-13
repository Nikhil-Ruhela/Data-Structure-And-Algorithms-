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
node* Kth_ancestor(node* root , int &k , int n){
    

    if(root == NULL){
        return NULL;
    }
    if(root->data == n){
        return root;
    }
    
    node* leftAns = Kth_ancestor(root->left , k ,n);
    node* rightAns = Kth_ancestor(root->right , k,n);

    
    if(leftAns != NULL && rightAns == NULL){
        k--;
       if(k==0){
        return root;
       }
    else{
        return leftAns;
    }
    }
    if(leftAns == NULL && rightAns != NULL){
        k--;
       if(k==0){
        return root;
       }
    
    else{
        return rightAns;
    }
    }
    
    } 
int main(){
    node* root = NULL;   
    root = buildtree(root);     
    int k , n;                               // 1 2 3 4 -1 -1 5 -1 -1 6 -1 -1 7 -1 8 9 -1 -1 10 -1 11 -1 -1
    cout<<"Enter the value of K :"<<" ";
    cin>>k;
    cout<<"Enter the value of node for which you want"<<" "<<k<<"th"<<" "<<"ancestor:"<<" "; 
    cin>>n;
    
    node* ancestor = Kth_ancestor(root , k , n);
    cout<<ancestor->data;
    return 0;
}




