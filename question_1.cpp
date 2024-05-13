#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class with methods to insert, remove duplicates, and display
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

    // Remove duplicates from the sorted linked list
    void removeDuplicates() {
        Node* current = head;

        while (current != nullptr && current->next != nullptr) {
            if (current->data == current->next->data) {
                // If duplicate found, remove the next node
                Node* duplicate = current->next;
                current->next = duplicate->next;
                delete duplicate;
            } else {
                // Move to the next node
                current = current->next;
            }
        }
    }

    // Display the elements of the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << std::endl;
    }
};

int main() {
    // Example Usage:
    LinkedList linkedList;

    // Insert values into the linked list
    int data_values[] = {1, 1, 2, 3, 3, 4, 5, 5, 5};
    for (int value : data_values) {
        linkedList.insert(value);
    }

    cout << "Original Linked List:" <<endl;
    linkedList.display();

    // Remove duplicates
    linkedList.removeDuplicates();

    cout << "Linked List after removing duplicates:" <<endl;
    linkedList.display();

    return 0;
}

