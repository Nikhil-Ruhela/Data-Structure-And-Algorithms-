#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class with methods to insert, reverse, and display
class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Insert a new node with the given data at the end of the linked list
    void insert(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    // Reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

    // Display the elements of the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    // Example Usage:
    LinkedList linkedList;

    // Insert values into the linked list
    int data_values[] = {1, 2, 3, 4, 5};
    for (int value : data_values) {
        linkedList.insert(value);
    }

    cout << "Original Linked List:" <<endl;
    linkedList.display();

    // Reverse the linked list
    linkedList.reverse();

    cout << "Reversed Linked List:" <<endl;
    linkedList.display();

    return 0;
}
