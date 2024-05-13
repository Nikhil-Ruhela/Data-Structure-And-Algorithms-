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

Node* add_LL(Node* &first ,Node* &second){
    int carry = 0;
    Node* ansHead = new Node(-1);
    Node* ansTail = ansHead;
    while (first || second || carry)
    {
       int sum = carry + (first ? first ->data :0) + (second ? second->data : 0);
       carry = sum/10;
       
       ansTail->next = new Node(sum % 10);
       ansTail = ansTail ->next;

       if(first){
        first = first->next;
       }
       
       if(second){
        second = second -> next;
       }
    }
    return ansHead->next;
   
    }

Node* add_linked_list(Node* first , Node* second){
    first = reverse(first);
    second = reverse(second);
    Node* ans = add_LL( first , second);
    ans = reverse(ans);    
    return ans;
}
int main(){
    Node* node1 = new Node(8);
    Node* node2 = new Node(3);

    Node* first = node1;
    Node* second = node2;

    Node* tail1 = node1;
    Node* tail2 = node2;
 
    insertAtTail1(tail1 , 1);
    print(first);

    insertAtTail2(tail2 , 3);
    insertAtTail2(tail2 , 5);
    print(second);

    Node* newnode = add_linked_list(first , second);
    print(newnode);

    // Clean up memory (optional)
    while (first) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }
    while (second) {
        Node* temp = second;
        second = second->next;
        delete temp;
    }
    while (newnode) {
        Node* temp = newnode;
        newnode = newnode->next;
        delete temp;
    }
    return 0;
}