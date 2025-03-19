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

int main()
{
    int values[] = {10, 20, 3, 38, 113};
    int size = sizeof(values) / sizeof(values[0]);

    Node *head = createDoublyLinkedList(values, size);
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
