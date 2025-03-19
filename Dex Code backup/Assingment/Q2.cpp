#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *prev;
    Node *next;
};

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

void traverse(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

void reverseTraverse(Node *head)
{
    if (head == nullptr)
        return; // empty list

    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    while (tail != nullptr)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main()
{
    int values[] = {1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(values[0]);

    Node *head = createDoublyLinkedList(values, size);

    cout << "Forward Traversal: ";
    traverse(head);

    cout << "Reverse Traversal: ";
    reverseTraverse(head);

    return 0;
}
