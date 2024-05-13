#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head , int d){
   Node* temp = new Node(d);
   head -> next = temp;
   head = temp;
}

void print(Node* &number){
    Node* temp = number;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

bool iscircular(Node* head){
    if(head == NULL){
        return true;
    }
     Node* temp = head->next;
     while(temp != head && temp != NULL){
        temp = temp->next;
     }
     if(temp == head){
        return true;
     }
     return false;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* number = node1;       
    insertAtHead(head , 20);
    insertAtHead(head , 30);
    insertAtHead(head , 40);
    insertAtHead(head , 50);
    insertAtHead(head , 60);
    insertAtHead(head , 70);
    print(number);

    cout<<iscircular(head);

    // if(iscircula(head)){
    //    cout<<"linked list is circular in nature "<<endl;
    // }
    // else{
    //     cout<<"linked list is not circular "<<endl;
    // }
    return 0;
}