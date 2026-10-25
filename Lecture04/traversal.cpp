#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node node1;
    Node node2;
    Node node3;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    Node* head = &node1;
    Node* ptr = head;

    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;

}

head
 ↓
node1
 ↑
ptr

head
 ↓
node1 → node2
          ↑
         ptr