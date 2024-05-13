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
// METHOD 1
int diameter(node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) +1;

    int ans = max(op1 , max(op2 , op3));
}

// METHOD 2
pair<int,int>diameterfast(node* root){
    if(root == NULL){
        pair<int,int>p = make_pair(0,0);
        return p;
    }
    pair<int,int>left = diameterfast(root->left);
    pair<int,int>right= diameterfast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second +1;

    pair<int,int>ans;
    ans.first = max(op1,max(op2,op3));
    ans.second= max(left.second , right.second) +1;

    return ans;

}
int main(){
     node* root = NULL;          
    root = buildtree(root);        // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 9 8 -1 -1 -1 -1
    // pair<int,int>root;
    cout<<"The maximum height of tree is: "<<diameterfast(root).second<<endl;
    cout<<"The maximum height of tree is: "<<height(root)<<endl;
    cout<<"The maximum diameter of tree is: "<<diameterfast(root).first<<endl;
    cout<<"The maximum diameter of tree is: "<<diameter(root)<<endl;
    return 0;
}