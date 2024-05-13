#include<iostream>
#include<unordered_map>
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
       return ;
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

Node* clone_linked_list(Node* head){
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp = head;
    while(temp!= NULL){
        insertAtTail(cloneTail, cloneHead, temp->data);
        temp = temp->next;
    }
    //  creating a map
    unordered_map<Node* , Node* > oldTonewNode;
    Node* originalnode = head;
    Node* clonenode = cloneHead;

    while(originalnode != NULL){
        oldTonewNode[originalnode] = clonenode;
        originalnode = originalnode->next;
        clonenode = clonenode->next;
    }
    originalnode = head;
    clonenode = cloneHead;

    while(originalnode != NULL) {

  clonenode->rendom = oldTonewNode[originalnode ->rendom];
  originalnode = originalnode -> next;
  clonenode =clonenode->next;
    }
    return cloneHead;
    // cloneHead = head;
    // cloneTail = head->next;
    // return cloneHead;
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

    Node* newnode = clone_linked_list(head);
    print(newnode);
    return 0;
}