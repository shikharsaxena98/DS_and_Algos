#include<iostream>

class node{
	public:
	int val;
	node* next;

	node(int d){
		val = d;
		next = NULL;
	}
};

void insertTail(node* &head, int val){
	if(head == NULL){
		head = new node(val);
		return;
	}

	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = new node(val);
}

void buildLL(node* &head){
	int temp;
	std::cin>>temp;
	while(temp != -1){
		insertTail(head, temp);
		std::cin>>temp;
	}
}

void printLL(node* head){
	while(head != NULL){
		std::cout<<head->val<<" ";
		head = head->next;
	}
	std::cout<<'\n';
}

void delPos(node* &head, int pos){
	if(pos == 0){
	       	node* temp = head;
		head = head->next;
		delete temp;
		return;
	}

	int count = 0;
	node* temp = head;
	while(count != pos-1){
		temp = temp->next;
		count++;
	}

	node* tmp = temp->next;
	temp->next = temp->next->next;
	delete tmp;

}

int main(){
	node* head = NULL;
	buildLL(head);
	printLL(head);

	int pos;
	std::cin>>pos;
	delPos(head, pos);
	printLL(head);
	return 0;
}
