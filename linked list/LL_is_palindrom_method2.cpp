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
Node* reverse(Node* &head){
        if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;

    }
        return prev;
    }

Node* is_palindrom(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node* middle = getmiddle(head);
    Node* temp = middle->next;
    middle->next = reverse(temp);
    
    Node* head1 = head;
    Node* head2 = middle->next;
    while(head2 != NULL){
        if(head1->data != head2->data){
           cout<<"it is not palindrom "<<endl;
           
        }
        head1 = head1->next;
        head2 = head2->next;       
    }

    temp = middle->next;
    middle->next = reverse(temp);
    cout<<"it is palindrom "<<endl;

}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , 2); 
    insertAtTail(tail , 3);
    insertAtTail(tail , 3);
    insertAtTail(tail , 4);
    insertAtTail(tail , 1);
    // insertAtTail(tail , 1);

    print(head);

    // cout<<is_palindrom(head);
    Node* newnode = is_palindrom(head);
    cout<<newnode->data<<endl;

    return 0
}