#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* node1 = new Node{10, NULL};
    Node* node2 = new Node{20, NULL};
    Node* node3 = new Node{30, NULL};

    node1->next = node2;
    node2->next = node3;

    Node* head = node1;

    Node* temp = head;
    head = head->next;
    delete temp;

    Node* ptr = head;

    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    while (head != NULL){
        Node* temp = head;
        head = head-> next;
        delete temp;
    }

    return 0;
}