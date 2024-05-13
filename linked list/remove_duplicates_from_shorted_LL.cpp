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

Node* removeduplicates(Node* head){
    if(head == NULL){
        return head;
    }
    Node* curr = head;
    
    while(curr != NULL){

    if(curr->next!= NULL && curr->data == curr->next->data){
        Node* next_next = curr->next->next;
        Node* nodetodelet = curr->next;
         delete(nodetodelet);
         curr->next = next_next;
        //  nodetodelet->next = NULL;  
    }
    else{
        curr = curr->next;
    }
    }
    return head;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , 20); 
    insertAtTail(tail , 20);
    insertAtTail(tail , 20);
    insertAtTail(tail , 50);
    insertAtTail(tail , 60);
    insertAtTail(tail , 70);

    print(head);
    
    Node* remove =  removeduplicates(head);
    print(remove);
    return 0;
}