#include<iostream>
#include<string>

using namespace std;

class Node{
	public:
	string data;
	Node* next;
};

// Function to search for a node with a given value in the linked list
Node* searchNode(Node* head, string key) {
    Node* current = head;

    // Traverse the linked list until the end or until key is found
    while (current != nullptr) {
        if (current->data == key) {
            // If key is found, return the node
            return current;
        }
        current = current->next;
    }

    // If key is not found, return nullptr
    return nullptr;
}

int main(){
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;

	one = new Node();
	two = new Node();
	three = new Node();

	one->data = "First";
	two->data = "Second";
	three->data = "Third";

	one->next = two;
	two->next = three;
	three->next = NULL;

	head = one;

    // Search for a node with value 2
    Node* result = searchNode(head, "Second");

    if (result != nullptr) {
        cout << "Node with value \"Second\" found." << endl;
    } else {
        cout << "Node with value \"Second\" not found." << endl;
    }
	
	return 0;
}