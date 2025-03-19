#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

// 1. A Double Linked List with 5 elements
Node *createDoublyLinkedList()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    for (int i = 1; i <= 5; ++i)
    {
        Node *newNode = new Node{i, nullptr, nullptr};
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    return head;
}

// 2a. Traverse function
void traverseForward(Node *head)
{
    Node *current = head;
    cout << "Forward Traversal: ";
    while (current)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// 2b. Reverse function
void traverseBackward(Node *head)
{
    if (!head)
        return;
    Node *tail = head;
    while (tail->next)
        tail = tail->next;

    cout << "Backward Traversal: ";
    while (tail)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}

// 3. Creating a Circular Double linked list
struct CNode
{
    int data;
    CNode *prev;
    CNode *next;
};

CNode *createCircularDoublyLinkedList()
{
    CNode *head = nullptr;
    CNode *tail = nullptr;
    for (int i = 1; i <= 5; ++i)
    {
        CNode *newNode = new CNode{i, nullptr, nullptr};
        if (!head)
        {
            head = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
        }
        tail = newNode;
    }
    return head;
}

// 4a. Traverse function to move forward through the Circular Doubly Linked List
void traverseForwardCircular(CNode *head)
{
    if (!head)
        return;
    CNode *current = head;
    cout << "Forward Traversal (Circular): ";
    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

// 4b. Reverse function to move backward through the Circular Doubly Linked List
void traverseBackwardCircular(CNode *head)
{
    if (!head)
        return;
    CNode *current = head->prev;
    cout << "Backward Traversal (Circular): ";
    do
    {
        cout << current->data << " ";
        current = current->prev;
    } while (current != head->prev);
    cout << endl;
}

int main()
{
    // Regular Doubly Linked List
    Node *dll = createDoublyLinkedList();
    traverseForward(dll);
    traverseBackward(dll);

    // Circular Doubly Linked List
    CNode *cdll = createCircularDoublyLinkedList();
    traverseForwardCircular(cdll);
    traverseBackwardCircular(cdll);

    return 0;
}
