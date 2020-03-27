#include<iostream>

class node{
	public:
		int val;
		node* next;

		node(int data){
			val =data;
			next = NULL;
		}
};

void insertTail(node* &head, int val){
	if(head == NULL){
		head = new node(val);	
	} else {
		node* temp = head;
		while(temp->next != NULL) temp = temp->next;

		temp->next = new node(val);
	}
}

void printLL(node* head){
	while(head != NULL){
		std::cout<<head->val<<" ";
		head = head->next;
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

void del_list(node* &head){
	while(head != NULL){
		node* temp = head;
		head = head->next;
		delete temp;
	}

	head = NULL;
}

int main(){
	node* head = NULL;
	buildLL(head);
	printLL(head);
	
	del_list(head);
	printLL(head);
	return 0;
}
