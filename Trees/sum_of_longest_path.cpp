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
void solve(node*root , int length , int &max_length , int sum , int &max_sum){
    if(root == NULL){
        if(length > max_length){
            max_length = length;
            max_sum = sum;
        }
        else if(length == max_length){
            max_sum = max(sum , max_sum);
        }
        return ;
    }
    sum = sum + root->data;
    solve(root->left ,length,max_length,sum,max_sum);
    solve(root->right ,length,max_length,sum,max_sum);
}
int SumOfLongestPath(node*root){
    int length = 0;
    int max_length = 0;
    int sum = 0;
    int max_sum = INT32_MIN;  
    //    OR
    // int max_sum = 0;


    solve(root , length , max_length , sum , max_sum);
    return max_sum;
}
int main(){
    node* root = NULL;   // 4 2 7 -1 -1 1 6 -1 -1 -1 5 2 -1 -1 3 -1 -1 
    root = buildtree(root);    
    int SUM = SumOfLongestPath(root);
    cout<<"Sum of element of largest path of a tree is: "<<" "<<SUM<<endl;
    return 0;
}