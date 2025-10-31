#include <iostream>
#include <vector>
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

void binarySearch(int key) {
    vector<int> arr;
    Node* temp = head;

    // Copy linked list data into array
    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int low = 0, high = arr.size() - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element " << key << " found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        cout << "Element " << key << " not found in the list.\n";
}

int main() {
    // Sorted Linked List (for Binary Search)
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};
    Node* n4 = new Node{40, NULL};
    Node* n5 = new Node{50, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    head = n1;

    cout << "Linked List:\n";
    display();

    binarySearch(30);

    return 0;
}
