// difference of height of left sub tree and right sub tree is not more then one for all node of tree
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
int height(node* root){
    if(root == NULL){
        return 0;
    }
     
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left , right) + 1;
    return ans;     
}   

// METHOD 1 : Its time complexity id O(N^2)
bool isbalence(node* root){
    if(root == NULL){
        return true;
    }
     
    bool left = isbalence(root->left);
    bool right = isbalence(root->right);
   
    bool diff = abs (height(root->left) - height(root->right)) <=1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
  }
  // METHOD 2 : Its time complexity id O(N)  
  pair<bool,int>isbalenceFast(node*root){
    if(root == NULL){
        pair<bool,int>p = make_pair(true,0);
        return p;
    }
    pair<bool,int>left  = isbalenceFast(root->left);
    pair<bool,int>right  = isbalenceFast(root->right);

    bool leftans = left.first;
    bool rightans= right.first;
    bool diff = abs (left.second - right.second) <=1;

    pair<bool,int>ans;
    ans.second = max(left.second , right.second) +1;

    if(leftans && rightans && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
}

int main(){
    node* root = NULL;           // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 9 8 -1 -1 -1 -1
    root = buildtree(root);

    cout<<isbalence(root);
    cout<<isbalenceFast(root).first;
    return 0;
}