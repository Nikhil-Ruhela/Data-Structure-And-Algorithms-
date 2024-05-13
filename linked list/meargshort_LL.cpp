#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // Construstor
    Node(int d){
        this ->data = d;
        this ->next = NULL;
    }
};
void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// print from head
void print(Node* &head){
    // New node create
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
Node* findmid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left , Node* right){
    if(left == NULL){
        return right;
    }
     if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next; 
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next; 
    }
    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}

Node* mergeshort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    // break linked list into 2 half after finding mid
    Node* mid = findmid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    // recursion call to mearge both halfs
    left = mergeshort(left);
    right = mergeshort(right);

    // mearge both left and right halfs

    Node* result = merge(left , right);

    return result;
    
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , 4); 
    insertAtTail(tail , 3);
    insertAtTail(tail , 8);
    insertAtTail(tail , 2);
    insertAtTail(tail , 0);
    insertAtTail(tail , 10);
    print(head);

    // cout<<mergeshort(head)->data;
    Node* newnode = mergeshort(head);
    print(newnode);
    return 0;
}