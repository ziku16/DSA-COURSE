#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* node1 = new Node{10, NULL};
    Node* node2 = new Node{20, NULL};
    Node* node3 = new Node{30, NULL};
    Node* node4 = new Node{40, NULL};

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;
    Node* ptr = head;

    while (ptr != NULL && ptr->data != 20)
    {
        ptr = ptr->next;
    }

    if (ptr != NULL && ptr->next != NULL)
    {
        Node* temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
    }

    Node* current = head;

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}