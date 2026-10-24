#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* prev;
    Node* next;
};


head
 |
 v
NULL ← [20] ⇄ [30] → NULL

// Helper function to insert a new node at the front of a doubly linked list
void insertFront(Node*& head, int val) {
    Node* newNode = new Node{val, nullptr, head};
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

head
 |
 v
NULL ← [10] ⇄ [20] ⇄ [30] → NULL

int main() {
    // Initial two-node doubly linked list: 20 <-> 30
    Node* node1 = new Node{20, nullptr, nullptr};
    Node* node2 = new Node{30, nullptr, nullptr};

    node1->next = node2;
    node2->prev = node1;

    Node* head = node1;

    // Insert 10 at the beginning (resulting in: 10 <-> 20 <-> 30)
    insertFront(head, 10);

    // Forward traversal
    Node* ptr = head;
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    
    cout << "\n";
    
    return 0;
}