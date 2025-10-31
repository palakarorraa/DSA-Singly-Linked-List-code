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

void insertAtPos(int value, int pos) {
    Node* newNode = new Node{value, NULL};

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid Position!" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};
    n1->next = n2;
    n2->next = n3;
    head = n1;

    cout << "Initial Linked List:\n";
    display();

    insertAtPos(15, 2);

    cout << "After Insertion at Position 2:\n";
    display();

    return 0;
}
