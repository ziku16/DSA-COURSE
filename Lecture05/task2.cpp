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

    node1->next = node2;
    node2->next = node3;

    Node* head = node1;
    Node* prev = NULL;
    Node* curr = head;

    int target = 20;

    while (curr != NULL && curr->data != target)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr != NULL)
    {
        if (prev == NULL)
        {
            head = curr->next; // Agar phela node hi taret value hai
        }
        else
        {
            prev->next = curr->next; // beech waley ya akhri waley nodes key liye
        }

        delete curr; // Memory sey node delete kr do
    }

    Node* ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}

