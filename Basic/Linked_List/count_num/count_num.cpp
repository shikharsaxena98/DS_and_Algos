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
	while(val != -1){
		insertTail(head, val);
		std::cin>>val;
	}
}

int count_iter(node* head, int key){
	int count;
	while(head != NULL){
		if(head->data == key) count++;
		head = head->next;
	}
	return count;
}

int count_rec(node* head, int key){
	if(head == NULL) return 0;
	if(head->data == key) return 1 + count_rec(head->next, key);
	else return count_rec(head->next, key);
}


int main(){
	node* head= NULL;

	buildLL(head);

	int key;
	std::cin>>key;

	std::cout<<count_iter(head, key)<<'\n';
	std::cout<<count_rec(head, key)<<'\n';

	return 0;
}
