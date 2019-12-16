#include<iostream>



class Node {
public:
	int data;
       	Node * nxt_addr;	       
};

void count_nodes(Node * c){
	int val {0};
	while(c != NULL){
		c = c->nxt_addr;
		val++;	
	}

	std::cout<<val<<"\n";
}

void insert_node(Node * c, int new_data ){
	Node * new_node =NULL;
        
	new_node->data = new_data;
	new_node->nxt_addr= NULL;
	
	while(c != NULL){
		c= c->nxt_addr;
		if(c == NULL){
			c->nxt_addr = new_node;
		}
	}
	
}

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
	
	Node * D = NULL;
       	D = new Node();	

	std::cout<<"Before addition"<<"\n";
	count_nodes(A);

	insert_node(D, 5);
	
	count_nodes(A);
	return 0;
}
