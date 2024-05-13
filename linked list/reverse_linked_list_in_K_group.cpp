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
Node* reverse(Node* &head , int k){
    if(head == NULL){
        return NULL;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    Node* temp = head;
    while (count < k && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (count == k) {
        // Reverse the current group
        while (count > 0) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count--;
        }

        if (next != NULL) {
            head->next = reverse(next, k); // Recurse for the next group
        }

        return prev; // New head of the reversed group
    }

    return head; 
}
int main(){
    int k = 2;
    // Create a sample linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    cout << "Original Linked List: ";
    print(head);

    head = reverse(head , k);
    
    cout << "Reversed Linked List in Groups of " << k << ": ";
    print(head);
   

    return 0;
}