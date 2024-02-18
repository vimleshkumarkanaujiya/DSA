#include<iostream>
#include<string>

using namespace std;

/*Creating a New Node*/ 
class Node{
    public:
    string data;
    Node* next;
};

/*Insert New Node to Given Node*/
void insertNewNode(Node* prevNode, string newData){
    if(prevNode==NULL){
        cout << "Previous Node Can't be NULL";
        return;
    }

/*Creating New Node*/
    Node* newNode = new Node();
    newNode->data = newData;

/*Point New Node to the next node of the previous node*/
    newNode->next = prevNode->next;

/*Make the previous node point to the new node*/
    prevNode->next = newNode;
}

// Function to delete a node with given value from the linked list
void deleteNode(Node** headRef, string key) {
    // Store head node
    Node* temp = *headRef;
    Node* prev = nullptr;

    // If head node itself holds the key to be deleted
    if (temp != nullptr && temp->data == key) {
        *headRef = temp->next; // Changed head
        delete temp; // Free memory
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not present in the linked list
    if (temp == nullptr)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    // Free memory
    delete temp;
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

    insertNewNode(two, "Fourth");
    deleteNode(&one, "First");

    head = one;

    while (head!=NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    return 0;
}