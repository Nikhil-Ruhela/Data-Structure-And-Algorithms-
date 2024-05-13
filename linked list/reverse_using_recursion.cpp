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
Node* reverse1(Node* head){
    //  base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newhead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
    
}
void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

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
int main(){
     // create a new node
    Node* node1 = new Node(10);

    // head printed to node
    Node* head = node1;

    // tail printed to node
    Node* tail = node1;   
    
    //head print
    print(head);

    // insert new head
    insertAtHead(head , 20);
    print(head);

    // insert new head
    insertAtHead(head , 30);
    print(head);

    // insert new head
    insertAtHead(head , 40);
    print(head);

    // insert new head
    insertAtHead(head , 50);
    print(head);

    // insert new head
    insertAtHead(head , 60);
    print(head);

    // reverse function called
    Node* newhead = reverse1(head);
    print(newhead);
    return 0;
}