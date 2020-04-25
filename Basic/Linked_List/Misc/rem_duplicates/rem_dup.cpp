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
	if(head == NULL) head= new node(val);
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

void printLL(node* head){
	while(head != NULL){
		std::cout<<head->data<<" ";
		head = head->next;
	}
	std::cout<<'\n';
}

void removeDup(node* head){
	while(head != NULL){
		node* temp = head->next;
		while(temp->data == head->data){
			if(temp->next == NULL){
				delete temp;
				head->next = NULL;
				break;
			} else {
				node* v = temp;
				temp = temp->next;
				delete v;
			}
		}
		
		if(head->next == NULL) break;
		head->next = temp;
		head = head->next;
	}

}

void remDupSimp(node* head){
	node* curr = head;
	while(curr->next != NULL){
		if(curr->data == curr->next->data){
			node* nxt = curr->next->next;
			delete curr->next;
			curr->next = nxt;
		} else {
			curr = curr->next;
		}
	}
}

int main(){
	node* head = NULL;
	buildLL(head);
	printLL(head);

	removeDup(head);
	printLL(head);

	buildLL(head);
	remDupSimp(head);
	printLL(head);
	return 0;
}
