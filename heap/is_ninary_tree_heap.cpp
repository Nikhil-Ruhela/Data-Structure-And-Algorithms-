#include<iostream>
using namespace std;

struct
{
public:
    int root;
    int Node;

    Node = this->root;
   
};

int countNode(struct Node* root){
    if(root == NULL){
        return 0;
    }
    int ans = 1+ countNode(root-)
}

bool isHeap(struct Node* root){
    int index = 0;
    int totalcount = countNode(root);
    if(isCBT(root , index , totalcount) && isMaxOrder(root)){
        return true;
    }
    else{
        reurn false;
    }
}
int main(){
    
    return 0;
}