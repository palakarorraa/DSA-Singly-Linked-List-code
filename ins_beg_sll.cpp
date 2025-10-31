#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void insertAtBeg(int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

int main() {
    Node* n1 = new Node{20, NULL};
    Node* n2 = new Node{30, NULL};
    head = n1;
    n1->next = n2;

    cout << "Initial Linked List:\n";
    display();

    insertAtBeg(10);

    cout << "After Insertion at Beginning:\n";
    display();

    return 0;
}
