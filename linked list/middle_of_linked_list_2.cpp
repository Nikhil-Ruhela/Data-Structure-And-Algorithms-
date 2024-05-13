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

Node* getmiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    if(head->next->next == NULL){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
        fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
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
    Node* node1 = new Node(1);
    Node* head = node1;
    print(head);
    insertAtHead(head , 2);
    print(head);
    insertAtHead(head , 3);
    print(head);
    insertAtHead(head , 3);
    print(head);
    insertAtHead(head , 2);
    print(head);
    insertAtHead(head , 1);
    print(head);
    // insertAtHead(head , 70);
    // print(head);

    Node* findmiddle = getmiddle(head);
    // cout<<"middle element is : "<<getmiddle(head)<<endl;
    cout<<"middle element is : "<<findmiddle->data;
    // print(findmiddle);

    return 0;
}