/*
-> Linked list is a linear data stracture which is formed by the collection of nodes
-> Node have data and the address of next node
-> it is a dynamic data stracture
-> it can grow or shrink in run time
->   
*/

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

    // destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
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

void insertAtposition(Node* &tail ,Node* &head , int position , int d){
    
    Node* temp = head;
    int cnt = 1;
    // insert at start
    if(position ==1){
        insertAtHead(head ,d);
        return;
    }
    while (cnt < position-1)
    {
        temp = temp -> next;
        cnt ++;
    }
    // inserting at last position
    if(temp ->next == NULL){
        insertAtTail(tail , d);
        return;   
    }

    // creating a node of d
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> next = temp -> next;
    temp ->next = nodeToinsert;

}

void deletNode(int position,Node* &head){
    // delete first or starting node
    if(position ==1){
        Node* temp = head;
        head = head -> next;
        // deleting memory of starting node
            temp -> next = NULL;
        delete temp;
    }
    else{
        // delete any middle node or last node
        Node* curr = head;
        Node* pre = NULL;

        int cnt =1;
        while (cnt < position)
        {
            pre = curr;
            curr= curr ->next;
            cnt ++;
        }
        pre ->next = curr->next;
        curr -> next = NULL;
        delete curr;
        
    }
}


int main(){

    // create a new node
    Node* node1 = new Node(10);
    Node* head = node1;

    // cout<<node1 ->data<<endl;
    // cout<<node1 ->next<<endl;

    // head printed to node
    

    // tail printed to node
    Node* tail = node1;   //as we have single node so we can call it as a head and tail

    //head print
    
    // insertAtHead(head , 20);
    // insertAtHead(head , 30);
    // insertAtHead(head , 40);
    // print(head);

    //  tail print
    insertAtTail(tail , 20); 
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    print(tail);

    // insertAtposition(tail , head , 2 , 25);
    // print(head);
    
    // cout<<"head "<<head ->data<<endl;
    // cout<<"tail "<<tail ->data<<endl;

    // deletNode(3,head);
    // print(head);

    return 0;
}