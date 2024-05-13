#include<iostream>
#include<queue>
#include<vector>
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

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }

         if(temp->right){
            q.push(temp->right);
        }
        }  
    }
}

int no_of_leaf_node(node* root , int count){
        count = 0;
        if(root != NULL){
        no_of_leaf_node(root->left , count);
        if(root->left == NULL && root->right == NULL){
            count++;
        }
        no_of_leaf_node(root->right , count);

    }
    return count;
}
int main(){
    node* root = NULL;
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    cout<<"printing the level order tracersal output "<<endl;
    levelOrderTraversal(root);
    int count;
    cout<<no_of_leaf_node(root , count);
    return 0;
}