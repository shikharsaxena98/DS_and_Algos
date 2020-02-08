#include<iostream>



class Node {
public:
	int data;
       	Node * nxt_addr;	       

	Node(int d){
		data = d;
		nxt_addr = NULL;
	}

};

void count_nodes(Node * c){
	int val {0};
	while(c != NULL){
		c = c->nxt_addr;
		val++;	
	}

	std::cout<<val<<"\n";
}

Node* insert_node(Node * head, int new_data ){
	Node* new_node = new Node(new_data);
        
//	new_node->data = new_data;
	new_node->nxt_addr= head;
/*	
	while(c != NULL){
		c= c->nxt_addr;
		if(c == NULL){
			c->nxt_addr = new_node;
		}
	} */

	return new_node;
	
}

int main(){
	Node* head = new Node(2);
	
//	head->data = 2;

	std::cout<<"Before 1st insertion, count: "<<'\n';
	count_nodes(head);

	head = insert_node(head, 4);

	std::cout<<"After 1st Insertion, count: "<<'\n';
	count_nodes(head);


	
	count_nodes(head);

	head = insert_node(head, 5);
	
	count_nodes(head);
	return 0;
}
