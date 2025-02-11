#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next; // A single linked list needs two members/variables, it needs an integer to keep the value and a pointer to keep the address of the next node
};

void NodeTraverse(Node *NodePtr)
{
    cout << "Address of current node: " << NodePtr << endl;
    cout << "Value of current node: " << NodePtr->value << endl;
    cout << "Next node's address: " << NodePtr->next << endl
         << endl; // These 3 lines are outputting the data from the nodes.

    if (NodePtr->next != NULL)
    {
        NodeTraverse(NodePtr->next); // As long as the next pointer of the current node is not NULL we will repeat this function in recursion
    } //	In other words, as long as there is a node after the current node, it will keep repeating
    if (NodePtr->next == NULL)
    {
        cout << "We have reached the end of the list." << endl; // When the next pointer of the current node is NULL, the function will stop as there is no call to it
                                                                // In other words, if there is no node after the current node, the function will stop
    }
}

int main()
{
    Node N1, N2, N3; // We are initializing 3 objects of the Node data type and giving them names

    N1.value = 5; // We are assigning values to the nodes
    N2.value = 13;
    N3.value = 38;

    N1.next = &N2; // We are placing the address of the next node in the next pointer of the current node
    N2.next = &N3;
    N3.next = NULL; // Since this is a non circular linked list the next pointer of the final node will remain NULL since there is no connection

    NodeTraverse(&N1);
}