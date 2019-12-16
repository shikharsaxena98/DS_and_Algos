#include<iostream>
#include "count_nodes.h" 


class Node {
public:
	int data;
       	Node * nxt_addr;	       
};

int main(){
	Node * A = NULL;
	Node * B = NULL;
	Node * C = NULL;

	A = new Node();
	B = new Node();
	C = new Node();

	A->data = 1;
	A->nxt_addr = B;

	B->data= 2;
	B->nxt_addr = C;

	C->data= 3;
	C->nxt_addr= NULL;

	std::cout<<count_nodes(A);
	return 0;
}
