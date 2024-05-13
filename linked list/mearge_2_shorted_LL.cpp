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
void insertAtTail1(Node* &tail1 , int d){
    Node* temp = new Node(d);
    tail1 -> next = temp;
    tail1 = temp;
}

void insertAtTail2(Node* &tail2 , int d){
    Node* temp = new Node(d);
    tail2 -> next = temp;
    tail2 = temp;
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

Node* short_2_shorted_LL(Node* head1 , Node* head2 , Node* head){
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    if(head1<= head2){
        head1 = head;
    }
    else{
        head2 = head;
    }
    Node* curr1 = head1;
    Node* curr2 = head2;
    Node* next1 = curr1->next

    
    
}

int main(){
    Node* node1 = new Node(0);
    Node* node2 = new Node(3);

    Node* head1 = node1;
    Node* head2 = node2;

    Node* tail1 = node1;
    Node* tail2 = node2;

    
    insertAtTail1(tail1 , 0); 
    insertAtTail1(tail1 , 1);
    insertAtTail1(tail1 , 4);
    insertAtTail1(tail1 , 8);
    print(head1);

    insertAtTail2(tail2 , 3);
    insertAtTail2(tail2 , 5);
    insertAtTail2(tail2 , 7);
    insertAtTail2(tail2 , 9);
    print(head2);
    return 0;
}