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
        return nullptr;

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
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *current = head;
    cout << "Forward: ";
    do
    {
        cout << current->value << " ";
        current = current->next;
    } while (current != head); // Stop when we return to head
    cout << endl;
}

void reverseTraverse(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *tail = head->prev; // Get the last node
    Node *current = tail;

    cout << "Reverse: ";
    do
    {
        cout << current->value << " ";
        current = current->prev;
    } while (current != tail); // Stop when we return to the last node
    cout << endl;
}

int main()
{
    int values[] = {10, 20, 30, 40, 50};
    int size = sizeof(values) / sizeof(values[0]);

    Node *head = createCircularDoublyLinkedList(values, size);

    traverse(head);
    reverseTraverse(head);

    return 0;
}
