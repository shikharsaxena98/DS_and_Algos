#include<iostream>

struct Node {
	int val;
	struct Node* addr;	
};

void printlist(struct Node* n){
	while(n!=NULL){
		std::cout<< n->val<<"\n";
		n=n->addr;
	}
}

int main(){
	struct Node* head = NULL;
	struct Node* two = NULL;
	struct Node* three = NULL;
	
	head = (struct	 Node*) malloc(sizeof(struct Node));
	two =(struct   Node*) malloc(sizeof(struct Node));
	three =(struct   Node*) malloc(sizeof(struct Node));

	head->val = 1;
	head->addr = two;

	two->val = 2;
	two->addr = three;

	three->val = 3;
	three->addr = NULL;

	printlist(head);
	return 0;
}
