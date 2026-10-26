#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value) {
    Node* newNode = new Node{value, top};
    top = newNode;
}

void pop() {
    if (top == nullptr) {
        cout << "Stack Underflow" << endl;
        return;
    }

    Node* temp = top;
    cout << "Popped: " << top->data << endl;
    top = top->next;
    delete temp;
}

void peek() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Top: " << top->data << endl;
}

void display() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }

    Node* ptr = top;
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    peek();

    return 0;
}