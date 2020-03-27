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
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = new node(val);
	}
}

void buildLL(node* &head){
	int val;
	std::cin>>val;
	while(val!=-1){
		insertTail(head, val);
		std::cin>>val;
	}
}

int find_mid(node* head){
	node* fast_ptr = head;
	node* slow_ptr = head;
	while(fast_ptr != NULL && fast_ptr->next != NULL){
		fast_ptr = fast_ptr->next->next;

		slow_ptr = slow_ptr->next;
	}

	return slow_ptr->data;
	
}

int main(){
	node* head = NULL;
	buildLL(head);
	std::cout<<find_mid(head)<<'\n';

	return 0;
}
