#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node node1;
    Node node2;
    Node newNode;

    node1.data = 10;
    node2.data = 20;

    node1.next = &node2;
    node2.next = NULL;

    newNode.data = 15;
    newNode.next = &node2;
    node1.next = &newNode;

    Node* head = &node1;
    while (head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;

    return 0;
}
