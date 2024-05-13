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
void print(Node* &head){
    // New node create
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* floyddetectloop(Node* head){
    if(head == NULL){
        return NULL;
    }
  Node* slow = head;
  Node* fast = head;
  while(slow != NULL &&fast != NULL){
  fast = fast->next;
  if(fast != NULL){
    fast = fast->next;
  }
  slow = slow->next;
  if(slow == fast){
            cout<<"Cycle is present on : "<<fast->data<<endl;
    return fast;
  }
  }
  return NULL;
}

Node* getstastingnode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floyddetectloop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;

    while(slow != intersection){
        intersection = intersection->next;
        slow = slow->next;
    }
    return slow;
}

Node* removeloop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* startingloop =  getstastingnode(head);
    Node* temp = startingloop;

    while(temp->next != startingloop){
       temp = temp->next;
    } 
    temp->next = NULL;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , 20); 
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);
    insertAtTail(tail , 60);
    print(head);
    
    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;

    tail->next = head->next;

    if(floyddetectloop(head) != NULL){
        cout<<"Cycle is present "<<endl;
    }
    else{
        cout<<"Cycle is not present "<<endl;
    }
    
    cout<<"starting at node : "<<getstastingnode(head)->data<<endl;

    removeloop(head);
    print(head);
    return 0;
}