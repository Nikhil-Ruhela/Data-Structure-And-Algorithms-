/*
->it is a type of single linked list or doubly linked list in which last node  point Null 
  but in circular linked list last node point to head node or first node
->we not use head pointer in this , we only use tail pointer
*/
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

    // destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail , int element , int d){
    // assumnt the element is present in the list

    // empty list
    if(tail ==NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        tail->next = newnode;
    }
    else{
        // non empty list
        // assumnt the element is present in the list
        Node* curr = tail;

        while (curr->data != element){
            curr = curr->next;
        }
        // element found -> curr is represent element wala node

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        }
}

void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty ";
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deletNode(Node* &tail ,int value){
    // empty list
    if(tail == NULL){
        cout<<"list is empty , please check again"<<endl;
        return ;
    }
    else{
        // non empty
        // assumint that 'value ' is present in the list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 Node linked list
        if(curr == prev){
            tail = NULL;
        }
        // greater then or equal to 2 Node linked list
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool iscircular(Node* tail){
    if(tail == NULL){
        return true;
    }
     Node* temp = tail->next;
     while(temp != tail && temp != NULL){
        temp = temp->next;
     }
     if(temp == tail){
        return true;
     }
     return false;
}
int main(){
    // Node* node1 = new Node(10);
    // Node* head = node1;

    Node* tail = NULL;

    insertNode(tail , 5 ,3);
    print(tail);
    insertNode(tail , 3 ,5);
    print(tail);
    insertNode(tail , 5 ,7);
    print(tail);
    insertNode(tail , 7 ,9);
    print(tail);
    insertNode(tail , 3 ,4);
    print(tail);
    
    // deletNode(tail , 3);
    // print(tail);

    cout<<iscircular(tail);
    
    return 0;
}