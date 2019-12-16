#include<iostream>

class Node {
public:
        int data;
        Node * nxt_addr;
};


int count_nodes(Node * c){
	int val {0};
	while(c != NULL){
		c=c->nxt_addr;
		val++;
	}
	return val;
}


