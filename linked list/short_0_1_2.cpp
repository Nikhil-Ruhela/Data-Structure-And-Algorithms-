// // Method first by replacement of data
// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     // Construstor
//     Node(int d){
//         this ->data = d;
//         this ->next = NULL;
//     }
// };
// void insertAtTail(Node* &tail , int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
// }

// // print from head
// void print(Node* &head){
//     // New node create
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp ->data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// Node* short_0_1_2(Node* head){
//      int zerocount = 0;
//      int onecount = 0;
//      int twocount = 0;

//     Node* temp = head;
//      while(temp != NULL){
//         if(temp->data == 0)
//         zerocount++;
//         else if(temp->data == 1)
//         onecount++;
//         else if(temp->data == 2)
//         twocount++;
//         temp = temp->next;
//      }
//      temp = head;

//      while(temp != NULL){
//         if(zerocount != 0 ){
//             temp->data = 0;
//             zerocount--;
//         }
//         else if(onecount != 0){
//             temp->data = 1;
//             onecount--;
//         }
//         else if(twocount != 0){
//             temp->data = 2;
//             twocount--;
//         }
//         temp = temp->next;
//      }
//      return head;
     
// }


// int main(){
//     Node* node1 = new Node(1);
//     Node* head = node1;
//     Node* tail = node1;

//     insertAtTail(tail , 0); 
//     insertAtTail(tail , 1);
//     insertAtTail(tail , 0);
//     insertAtTail(tail , 2);
//     insertAtTail(tail , 1);
//     insertAtTail(tail , 2);

//     print(head);

//     Node* newlist = short_0_1_2(head);
//     print(head);
//     return 0;
// }

// Method second by not replacement of data

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
void insert_at_sub_list(Node* &tail ,Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* short_0_1_2(Node* head){
    Node* zerohead = new Node(-1);
    Node* zeroTail = zerohead;
    Node* onehead = new Node(-1);
    Node* oneTail = onehead;
    Node* twohead = new Node(-1);
    Node* twoTail = twohead;

    Node* curr = head;

// create 3 sub list
    while(curr != NULL){
       int value = curr->data;
       
       if(value == 0){
        insert_at_sub_list(zeroTail , curr);
       }
       else if(value == 1){
       insert_at_sub_list(oneTail  , curr);
       }
       else if(value == 2){
        insert_at_sub_list(twoTail , curr);
       }
       curr = curr->next;
    }

    // mearge 3 sub list
    if(onehead->next != NULL){
        zeroTail->next = onehead->next;
    }
    else{
        zeroTail->next = twohead->next;
    }

    oneTail->next = twohead->next;
    twoTail->next = NULL;

    head = zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;
    return head;

}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail , 0); 
    insertAtTail(tail , 1);
    insertAtTail(tail , 0);
    insertAtTail(tail , 2);
    insertAtTail(tail , 1);
    insertAtTail(tail , 2);

    print(head);
    
    // cout<<short_0_1_2(head);

    Node* newlist = short_0_1_2(head);
    print(newlist);
    // return 0;
}