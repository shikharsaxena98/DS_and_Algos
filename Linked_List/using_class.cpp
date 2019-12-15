#include<iostream>

class Node{
	public:
		int data;
		Node* next;
};

void print(Node* n){
	while(n!=NULL){
		std::cout<<n->data<<"\n";
		n = n->next;
	
	}
}

int main(){
	Node* head=NULL;
	Node* two = NULL;
	Node* three = NULL;
	
	head = new Node();
	two = new Node();
	three = new Node();

	head->data = 1;
      	head->next = two;

	two->data=2;
	two->next= NULL;

	print(head);	
	return 0;
}
