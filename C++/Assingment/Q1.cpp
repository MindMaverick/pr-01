#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
struct Node
{
    int value;
    Node *prev;
    Node *next;
};

// Function to create a Doubly Linked List with given values
Node *createDoublyLinkedList(int values[], int size)
{
    if (size == 0)
    {
        return nullptr;
    }
    Node *head = new Node{values[0], nullptr, nullptr};
    Node *current = head;
    for (int i = 1; i < size; i++)
    {
        Node *newNode = new Node{values[i], current, nullptr};
        current->next = newNode;
        current = newNode;
    }
    return head;
}

int main()
{
    int values[] = {1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(values[0]);

    // Creating Doubly Linked List
    Node *head = createDoublyLinkedList(values, size);

    return 0;
}
