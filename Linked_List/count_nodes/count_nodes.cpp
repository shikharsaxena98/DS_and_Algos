#include<iostream>

class Node {
	public:
	int data;
	Node * next; 
};

int count_nodes(Node * c){
	int val {0};
	while(c != NULL){
		c=c->next;
		val++;
	}
	return val;
}

int main(){
	Node * A = NULL;
	Node * B = NULL;
	Node * C = NULL;

	A = new Node();
	B = new Node();
	C = new Node();

	A->data = 1;
	A->next = B;

	B->data = 2;
	B->next = C;

	C->data = 3;
	C->next = NULL;

	int num	{count_nodes(A)};
	std::cout<<num<<"\n";

	return 0;
}
