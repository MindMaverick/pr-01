#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to create a Doubly Linked List with given values
Node* createDoublyLinkedList(int values[], int size) {
    if (size == 0) return nullptr;
    Node* head = new Node{values[0], nullptr, nullptr};
    Node* current = head;
    for (int i = 1; i < size; i++) {
        Node* newNode = new Node{values[i], current, nullptr};
        current->next = newNode;
        current = newNode;
    }
    return head;
}

// Function to traverse the list forward
void traverseForward(Node* head) {
    cout << "Forward Traversal: ";
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to traverse the list backward
void traverseBackward(Node* tail) {
    cout << "Backward Traversal: ";
    while (tail) {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(values[0]);
    
    // Creating Doubly Linked List
    Node* head = createDoublyLinkedList(values, size);
    

    
    traverseForward(head);
    
    // Finding the tail for backward traversal
    Node* tail = head;
    while (tail && tail->next) tail = tail->next;
    
   
    traverseBackward(tail);
    
    return 0;
}
