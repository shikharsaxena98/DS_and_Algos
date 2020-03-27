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

int get_n(node* head, int n){
	while(n){
		head = head->next;
		n--;
	}
	return head->data;
}

int main(){
	node* head = NULL;
	
	buildLL(head);
	
	int n;
	std::cin>>n;

	std::cout<<get_n(head, n)<<'\n';

	return 0;
}
