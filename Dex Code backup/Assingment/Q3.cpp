#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *prev;
    Node *next;
};

Node *createCircularDoublyLinkedList(int values[], int size)
{
    if (size == 0)
    {
        return nullptr;
    }

    Node *head = new Node{values[0], nullptr, nullptr};
    Node *prevNode = head;

    for (int i = 1; i < size; i++)
    {
        Node *newNode = new Node{values[i], prevNode, nullptr};
        prevNode->next = newNode;
        prevNode = newNode;
    }

    prevNode->next = head;
    head->prev = prevNode;

    return head;
}

void traverse(Node *head)
{
    if (head == nullptr)
        return;

    Node *current = head;
    do
    {
        cout << current->value << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

// (Optional) Function to traverse the circular doubly linked list in reverse
void reverseTraverse(Node *head)
{
    if (head == nullptr)
        return;

    Node *current = head->prev;
    Node *tail = current;
    do
    {
        cout << current->value << " ";
        current = current->prev;
    } while (current != tail);
    cout << endl;
}

int main()
{
    int values[] = {10, 20, 30, 40, 50};
    int size = sizeof(values) / sizeof(values[0]);

    Node *head = createCircularDoublyLinkedList(values, size);

    cout << "Circular Doubly Linked List (Forward Traversal): ";
    traverse(head);

    cout << "Circular Doubly Linked List (Reverse Traversal): ";
    reverseTraverse(head);

    return 0;
}
