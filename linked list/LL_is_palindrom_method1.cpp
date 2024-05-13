#include<iostream>
#include<vector>
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

bool check_palindrom(vector <int> arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s]!= arr[e]){
            return 0 ;
        }
        s++;
        e--;
    }
    return 1;

}

Node* palindrom_or_not(Node* &head , Node* &tail){
    if(head == NULL || head->next == NULL){
    return head;
    }

    vector<int> arr;
    Node* temp = head;
    while(temp!= NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    cout<< check_palindrom(arr)<<endl;
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , 2); 
    insertAtTail(tail , 3);
    insertAtTail(tail , 5);
    insertAtTail(tail , 3);
    insertAtTail(tail , 2);
    insertAtTail(tail , 1);

    print(head);

    Node* newnode = palindrom_or_not(head , tail);
    cout<<newnode->data<<endl;
    
    return 0;
}