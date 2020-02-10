#include<iostream>

class node{
	public:
		int data;
		node* next;

		node(int d){
			data=d;
		}
};

void insertTail(node* &head, int data){
	if(head==NULL){
		head = new node(data);
	} else {
		node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = new node(data);
	}

	return;
}

void buildLL(node* &head){
	int val;
	std::cin>>val;

	while(val!= -1){
		insertTail(head, val);
		std::cin>>val;
	}
}

void printLL(node* head){
	while(head != NULL){
		std::cout<<"===>"<<head->data;
		head = head->next;
	}
	std::cout<<'\n';
	return;
}

int find_k_last(node* head, int k){
	node* fastptr = head;
	node* slowptr = head;

	while(k>0){
		fastptr = fastptr->next;
		k--;
	}

	while(fastptr!= NULL){
		fastptr = fastptr->next;
		slowptr = slowptr->next;
	}

	return slowptr->data;
}

int main(){
	node* head = NULL;

	buildLL(head);
	printLL(head);

	int k;
	std::cin>>k;

	int k_val = find_k_last(head, k);
	std::cout<<k_val<<'\n';

	return 0;
}
