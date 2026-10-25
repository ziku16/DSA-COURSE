#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* insert_mid(node* head, int x, node* new_node, int info) {
    if (new_node == NULL) {
        return head;
    }

    new_node->data = info;

    node* ptr = head;

    while (ptr != NULL && ptr->data != x) {
        ptr = ptr->next;
    }

    if (ptr != NULL && ptr->data == x) {
        new_node->next = ptr->next;
        ptr->next = new_node;
    }

    return head;
}

int main() {
    node n1 = {10, NULL};
    node* head = &n1;

    node mid_node;

    head = insert_mid(head, 10, &mid_node, 20);

    cout << head->data << " -> ";
    cout << head->next->data << " -> NULL" << endl;

    return 0;
}