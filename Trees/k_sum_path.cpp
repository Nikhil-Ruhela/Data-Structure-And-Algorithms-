#include<iostream>
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
void  solve(node* root , int k , int &count , vector<int>path){
    if(root == NULL){
        return;
    }
    path.push_back(root->data);
    // left call
    solve(root->left , k , count , path);
    // right call
    solve(root->right , k , count , path);
  
    // check for k sum

    int size = path.size();
    int sum = 0;
    for(int i = size-1;i>=0;i--){
        sum += path[i];
        if(sum == k){
            count++;
        }
    }
    path.pop_back();

}

int k_sum_path(node* root, int k){
  
   vector<int>path;
   int count = 0;
     solve(root , k , count , path);
    return count;
}
int main(){
    node* root = NULL;   
    root = buildtree(root);     // 1 2 -1 -1 3 -1 
    int k;
    cout<<"Enter the value that you want as a sum of no. :"<<" ";
    cin>>k;
    
    cout<<k_sum_path(root , k);

    return 0;
}