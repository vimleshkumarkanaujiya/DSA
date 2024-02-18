#include<iostream>
#include<string>

using namespace std;

class Node{
	public:
	string data;
	Node* next;
};

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

	while (head!=NULL)
	{
		cout << head->data <<" -> ";
		head = head->next;
	}
	
	return 0;
}
