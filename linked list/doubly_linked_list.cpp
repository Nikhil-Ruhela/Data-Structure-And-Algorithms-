/*
doubly linked list have 3 blick
one block have information about previous
one block have information about data
one block have information about Next
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
 // destructor
    ~Node(){
        int value = this -> data;
        if(Next != NULL){
            delete Next;
            this -> Next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
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
void insertAthead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->Next = head;
    head->prev = temp;
    head = temp;
}
void insertAttail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->Next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtposition(Node* &tail , Node* &head , int position , int d){
    Node* temp = head;
    int cnt = 1;
    // insert at start
    if(position ==1){
        insertAthead(head ,d);
        return;
    }
    while (cnt < position-1)
    {
        temp = temp ->Next;
        cnt ++;
    }
    // inserting at last position
    if(temp ->Next == NULL){
        insertAttail(tail , d);
        return;   
    }

    // creating a node of d
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> Next = temp -> Next;
    nodeToinsert->prev = temp;
    temp ->Next = nodeToinsert;
    temp->Next->prev = nodeToinsert;

}
void deletNode(int position,Node* &tail, Node* &head){
    // delete first or starting node
    if(position ==1){
        Node* temp = head;
        temp->Next->prev = NULL;
        head = temp->Next;
        // deleting memory of starting node
            temp -> Next = NULL;
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
            curr= curr ->Next;
            cnt ++;
        }
        curr ->prev = NULL;
        pre ->Next = curr->Next;
        curr -> Next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<"length is : "<<getlength(head)<<endl;

    // Insert_At_head
    // cout<<endl<<"Insert_At_head "<<endl;
    // print(head);
    // cout<<"Head : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;
    // insertAthead(head , 11);
    // print(head);
    // cout<<"Head : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;
    // insertAthead(head , 16);
    // print(head);
    // cout<<"Head : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;
    // insertAthead(head , 20);
    // print(head);
    // cout<<"Head : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;
    // Insert_At_Tail
    cout<<endl<<"Insert_At_Tail "<<endl;
    print(head);
    insertAttail(tail , 15);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAttail(tail , 20);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    insertAttail(tail , 25);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    // Insert_At_position
    insertAtposition(tail , head , 3 , 18);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    // Insert_At_start
    insertAtposition(tail , head , 1 , 100);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    // Insert_At_end
    insertAtposition(tail , head , 7 , 200);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    deletNode(7,tail ,head);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}