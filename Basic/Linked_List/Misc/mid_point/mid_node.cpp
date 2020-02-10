#include<iostream>

class node{
	public:
		int data;
		node* next;

		node(int d){
			data = d;
		}
};

void insertTail(node* &head, int data){
	if(head == NULL){
		head = new node(data);
		return;
	} else {
		node* temp = head;
		while(temp->next!=NULL){
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
		std::cout<<"--->"<<head->data;
		head = head->next;
	}
	std::cout<<'\n';
}

int findMid(node* head){
	node* fastptr=head;
	node* slowptr=head;
	
	while(fastptr!= NULL && fastptr->next != NULL){
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
	}

	return slowptr->data;
}

int main(){
	node* head = NULL;
	buildLL(head);
	printLL(head);

	int mid = findMid(head);
	std::cout<<mid<<'\n';
	return 0;
}
