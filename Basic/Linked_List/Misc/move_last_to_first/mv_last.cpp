#include<iostream>

class node{
	public:
		int data;
		node* next;

		node(int d){
			data = d;
			next = NULL;
		}
};

void insertTail(node* &head, int val){
	if(head == NULL) head = new node(val);

	else {
		node* temp = head;
		while(temp->next != NULL) temp = temp->next;

		temp->next = new node(val);
	}
}

void buildLL(node* &head){
	int val;
	std::cin>>val;

	while(val != -1){
		insertTail(head, val);
		std::cin>>val;
	}
}

void printLL(node* head){
	while(head != NULL){
		std::cout<<head->data<<" ";
		head = head->next;
	}
	std::cout<<'\n';
}

void change(node* &head){
	node* temp= head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}

	node* oldhead = head;
	head = temp->next;
//	head->next = oldhead->next;
	temp->next = NULL;
	head->next = oldhead;
	
}

int main(){
	node* head = NULL;
	buildLL(head);
	printLL(head);

	change(head);
	printLL(head);
	return 0;
}
