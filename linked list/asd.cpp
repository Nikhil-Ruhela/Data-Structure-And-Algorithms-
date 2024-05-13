#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;
    int count = 0;

    // Count the number of nodes in the current group
    ListNode* temp = head;
    while (count < k && temp != nullptr) {
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

        if (next != nullptr) {
            head->next = reverseKGroup(next, k); // Recurse for the next group
        }

        return prev; // New head of the reversed group
    }

    return head; // Return original head if the remaining group is smaller than k
}
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main(){

    int k = 2; // Change k to your desired group size

    // Create a sample linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original Linked List: ";
    printList(head);

    head = reverseKGroup(head, k);

    cout << "Reversed Linked List in Groups of " << k << ": ";
    printList(head);

    return 0;
}

    