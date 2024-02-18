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

    insertNewNode(three, "Fourth");

    head = one;

    while (head!=NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    return 0;
}