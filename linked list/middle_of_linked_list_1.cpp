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
int getlength(Node* head){
    int len=0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}

Node* findmiddle(Node* head){
    int len = getlength(head);
    int ans = 0;
    if(len%2==0){
        ans=(len/2);
    }else{
        ans = (len/2 - 1);
    }
    


    Node* temp = head;
    int cunt = 0;
    while(cunt <= ans){
        temp = temp->next;
        cunt++;
    }
    
    return temp;
}

void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

// void insertAtTail(Node* &tail , int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;

// }
// print from head
// void print(Node* &head){
//     // New node create
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp ->data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
int main(){

   Node* node1 = new Node(10);
    Node* head = node1;
    insertAtHead(head , 20);
    insertAtHead(head , 30);
    insertAtHead(head , 40);
    insertAtHead(head , 50);
    insertAtHead(head , 60);
    insertAtHead(head , 70);

    Node* getmiddle = findmiddle(head);
    // print(getmiddle);
    cout<<getmiddle->data;

    return 0;
}