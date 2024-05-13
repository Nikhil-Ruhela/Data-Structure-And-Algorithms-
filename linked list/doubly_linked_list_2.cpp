/*
if initally node is empty
*/
#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* prev;
Node* Next;

// constructor
Node(int d){
    this->data = d;
    this->prev = NULL;
    this->Next = NULL;
}
};

// traversing a linked list
void print(Node* &head){
    Node* temp = head;

    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
    
}
// length of linked list
int getlength(Node* &head){
    Node* temp = head;
    int leng = 0;
    while (temp!= NULL)
    {
        leng++;
        temp = temp->Next;
    }
    return leng;
}
void insertAthead(Node* &tail , Node* &head , int d){
    // empt list
    if(head == NULL){
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->Next = head;
    head->prev = temp;
    head = temp;
}
}
void insertAttail(Node* &tail , Node* &head , int d){
 if(tail == NULL){
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
    }
    else{Node* temp = new Node(d);
    tail->Next = temp;
    temp->prev = tail;
    tail = temp;
}
}
void insertAtposition(Node* &tail , Node* &head , int position , int d){
    Node* temp = head;
    int cnt = 1;
    // insert at start
    if(position ==1){
        insertAthead(tail , head ,d);
        return;
    }
    while (cnt < position-1)
    {
        temp = temp ->Next;
        cnt ++;
    }
    // inserting at last position
    if(temp ->Next == NULL){
        insertAttail(tail , head , d);
        return;   
    }

    // creating a node of d
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> Next = temp -> Next;
    nodeToinsert->prev = temp;
    temp ->Next = nodeToinsert;
    temp->Next->prev = nodeToinsert;

}

int main(){
 
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<"length is : "<<getlength(head)<<endl;

    // Insert_At_head
    // cout<<endl<<"Insert_At_head "<<endl;
    // print(head);
    // insertAthead(tail , head , 11);
    // print(head);
    // insertAthead(tail , head , 16);
    // print(head);
    // insertAthead(tail , head , 20);
    // print(head);
    // Insert_At_Tail
    cout<<endl<<"Insert_At_Tail "<<endl;
    print(head);
    insertAttail(tail , head , 15);
    print(head);
    insertAttail(tail , head , 20);
    print(head);
    insertAttail(tail , head , 25);
    print(head);

    // Insert_At_position
    insertAtposition(tail , head , 3 , 18);
    print(head);
    // Insert_At_start
    insertAtposition(tail , head , 1 , 100);
    print(head);
    // Insert_At_end
    insertAtposition(tail , head , 6 , 200);
    print(head);
    return 0;
}