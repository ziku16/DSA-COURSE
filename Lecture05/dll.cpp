#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node node1;
    Node node2;
    Node node3;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.prev = NULL;
    node1.next = &node2;

    node2.prev = &node1;
    node2.next = &node3;

    node3.prev = &node2;
    node3.next = NULL;

    Node* head = &node1;
    Node* ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl;

    ptr = &node3;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }

    return 0;
}