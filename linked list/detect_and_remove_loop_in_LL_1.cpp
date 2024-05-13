#include<iostream>
#include<map>
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

bool detectcycle(Node* head){
  
    if(head == NULL){
        return false;
    }

    map<Node* , bool>visited;

    Node* temp = head;

    while(temp != NULL){
        if(visited[temp]==true){
            cout<<"Cycle is present on : "<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floyddetectloop(Node* head){
    if(head == NULL){
        return NULL;
    }
  Node* slow = head;
  Node* fast = head;

  while(slow != NULL && fast != NULL){
  fast = fast->next;
  if(fast != NULL){
    fast = fast->next;
  }
  slow = slow->next;
  if(slow == fast){
            cout<<"Cycle is present on : "<<slow->data<<endl;
    return slow;
  }
  }
  return NULL;
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
    insertAtTail(tail , 70);

    print(head);
    

    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;

    tail->next = head->next;

    // if(detectcycle(head)){
    //     cout<<"Cycle is present "<<endl;
    // }
    // else{
    //     cout<<"Cycle is not present "<<endl;
    // }

     if(floyddetectloop(head) != NULL){
        cout<<"Cycle is present "<<endl;
    }
    else{
        cout<<"Cycle is not present "<<endl;
    }
    return 0;
}