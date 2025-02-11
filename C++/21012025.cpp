#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node
};

// Linked List class
class LinkedList
{
private:
    Node *head; // Head of the list
public:
    // Constructor
    LinkedList()
    {
        head = nullptr;
    }

    // Function to add a new node at the end
    void append(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        { // If the list is empty
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor to free memory
    ~LinkedList()
    {
        Node *temp;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function
int main()
{
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Linked List: ";
    list.display();

    return 0;
}
