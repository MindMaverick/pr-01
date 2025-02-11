#include <iostream>
using namespace std;

int runs = 0; // This variable will keep a track of the number of times the function has ran
			  // In other words, it keeps a track of how many nodes have been traversed

struct Node {
	int value; 
	Node* next; // A single linked list needs two members/variables, it needs an integer to keep the value and a pointer to keep the address of the next node
	bool isHead; // Since this is a circular linked list we need to add a boolean variable to ensure we can keep a track of the head
};

// Hint: a double linked list would require 3 members, one for the value, one for the next node, one for the previous node as we have to go back
// As this is a circular linked list, if we use a regular traverse function, the list will repeat infinitely because of the connection

void CircularNodeTraverse(Node* NodePtr) {
	

	// The logic in this function is to check whether the current node is the head node
	// If it is the head node we can then say that the end of the list has been reached
	// However there is a problem with that
	// The function would see the first node as the head node and end the program since it is designed that way
	// In order to counteract that problem, we are adding a runs variable that will allow us to ignore the first run
	// Once the first run has been ignored, if we end up finding a isHead variable to be true
	// We can come to the conclusion that we have completed the list and come back to the first node

	if (runs == 0) {
		runs = runs + 1;

		cout << "Address of current node: " << NodePtr << endl;
		cout << "Value of current node: " << NodePtr->value << endl;
		cout << "Next node's address: " << NodePtr->next << endl << endl; // These 3 lines are outputting the data from the nodes.

		CircularNodeTraverse(NodePtr->next);

		// If we start checking with the first node, the the printing would stop with one node
		// So we are designing this code to ignore the first run of the function

	}								 						
	else if (NodePtr->isHead == false) {
		runs = runs + 1;

		cout << "Address of current node: " << NodePtr << endl;
		cout << "Value of current node: " << NodePtr->value << endl;
		cout << "Next node's address: " << NodePtr->next << endl << endl; // These 3 lines are outputting the data from the nodes.

		CircularNodeTraverse(NodePtr->next);
		// This is the normal scenario where the current node is not the head so it will keep moving forward
	}
	else if (NodePtr->isHead == true) {
		cout << "We have reached the end of the list." << endl;
		// Finally since the first run has been ignored, when we return the head node once more, the function stops
	}

}

int main() {
	Node N1, N2, N3; // We are initializing 3 objects of the Node data type and giving them names

	N1.value = 5; // We are assigning values to the nodes
	N2.value = 13;
	N3.value = 38;

	N1.isHead = true; // We are setting this as true, because N1 is the first node or the head node of the linked list
	N2.isHead = false;
	N3.isHead = false;

	N1.next = &N2; // We are placing the address of the next node in the next pointer of the current node
	N2.next = &N3;
	N3.next = &N1; // Since this is a circular linked list the next pointer of the final node will be the address of the first node since there is a looping connection

	CircularNodeTraverse(&N1);
}