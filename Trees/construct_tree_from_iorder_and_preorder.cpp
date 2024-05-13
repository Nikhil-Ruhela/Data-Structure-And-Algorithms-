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
void *inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void *preorder(node* root){
    if(root != NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int findelement(int in[] , int element ,int n){
      for(int i=0;i<n;i++){
        if(in[i]==element){
            return i;
        }
        return -1;
      }
}

node* solve(int in[] , int pre[] , int index , int inorderstart , int inorderend , int n){
    // base case
    if(index >= n || inorderstart > inorderend){
        return NULL;
    }

    int element = pre[index++];
    // index++;
    node* root = new node(element);
    int position = findelement(in , element ,n);
    root->left = solve(in , pre , index , inorderstart , position-1 , n);
    root->right = solve(in , pre , index , position+1 , inorderend , n);

    return root;


}

node* buildtree_IN_PRE_ORDER(int in[] , int pre[] , int n){
    int preorderindex = 0;
    node* ans = solve(in , pre ,preorderindex,0,n-1,n );
}
int main(){

    return 0;
}