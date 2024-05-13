#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* rendom;

    // Construstor
    Node(int d){
        this ->data = d;
        this ->next = NULL;
    }
};
void insertAtTail(Node* &tail , Node* &head, int d){
    Node* newnode = new Node(d);
    if(head == NULL){
       head = newnode;
       tail = newnode;
    //    return ;
    }
    else{
    tail -> next = newnode;
    tail = newnode;
    }
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

Node* clone(Node* head){
    // step 1: create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneTail , cloneHead , temp->data);
        temp = temp->next;
    }
    // step 2: cloneNode add between original list
    Node* originalnode = head;
    Node* clonenode = cloneHead;

    while(originalnode != NULL && clonenode != NULL){
        Node* next = originalnode->next;
        originalnode->next = clonenode;
        originalnode = next;

        next = clonenode->next;
        clonenode->next = originalnode;
        clonenode = next;
    }
    // step 3: rendom pointer copy
    // temp = head;
    while(temp != NULL){
        if(temp->next != NULL){
            temp->next->rendom = temp->rendom ? temp->rendom->next:temp->rendom;  
        }
        temp = temp->next->next;
    }

    // step 4: revert changes in step 2
    originalnode = head;
    clonenode = cloneHead;
    while(originalnode != NULL && clonenode != NULL){
        originalnode->next = clonenode->next;
        originalnode = originalnode->next;

        if(originalnode != NULL){
        clonenode->next = originalnode->next;
        }
        clonenode = clonenode->next;
    }
    // step 5: return answer
    return cloneHead;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , head , 20); 
    insertAtTail(tail , head , 30);
    insertAtTail(tail , head , 40);
    insertAtTail(tail , head , 50);
    insertAtTail(tail , head , 60);
    insertAtTail(tail , head , 70);
    print(head);

    Node* newnode = clone(head);
    print(newnode);
    return 0;
}