#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

//construstor
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

Node* middle(Node* &head){
   
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
        fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
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
    
    Node* newnode = middle(head);
    // print(newnode);
    cout<<newnode->data;
    return 0;
}