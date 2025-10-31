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

void linearSearch(int key) {
    Node* temp = head;
    int pos = 1;
    bool found = false;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Element " << key << " found at position " << pos << endl;
            found = true;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if (!found)
        cout << "Element " << key << " not found in the list.\n";
}

int main() {
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};
    Node* n4 = new Node{40, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    head = n1;

    cout << "Linked List:\n";
    display();

    linearSearch(30);

    return 0;
}
