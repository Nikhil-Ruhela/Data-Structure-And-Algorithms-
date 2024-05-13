#include<iostream>
#include<vector>
#include<queue>
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
vector<int> zigzagTraversal(node* root){
    vector<int>result;
    if(root == NULL){
        return result;
    }
    queue<node*>q;
    q.push(root);

    bool leftToright = true;

    while(!q.empty()){
       int size = q.size();
       vector<int>ans(size);

    //    level process
    for(int i=0; i<size;i++){
       node* frontnode = q.front();

    //    normal insert or reverse insert
    int index = leftToright ? i: size-i-1;
    ans[index] = frontnode->data;

    if(frontnode->left){
        q.push(frontnode->left);
    }
    if(frontnode->right){
        q.push(frontnode->right);
    }
    }
    // direction change
    leftToright = !leftToright;
    for(auto i:ans){
        ans.push_back(i);
    }
    }
    return result;
}
int main(){
    node* root = NULL;
    root = buildtree(root);      //3 2 -1 -1 1 -1 -1
     
    vector<int> zigzagTraversal(root->data);
     cout<<zigzagTraversal(root);
    
    return 0;
}