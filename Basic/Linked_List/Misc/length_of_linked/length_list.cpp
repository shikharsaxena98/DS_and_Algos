#include<iostream>

class node{
	public:
		int data;
		node* next;

		node(int val){
			data = val;
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
	int val;
	std::cin>>val;

	while(val != -1){
		insertTail(head, val);
		std::cin>>val;
	}
}

int countIter(node* head){
	int count =0;
	while(head != NULL){
		head = head->next;
		count++;
	}

	return count;
}

int countRec(node* head){
	if(head == NULL) return 0;

	return 1 + countRec(head->next);
}

int main(){
	node* head = NULL;
	buildLL(head);
	std::cout<<"Itr count: "<<countIter(head)<<'\n';
	std::cout<<"Rec count: "<<countRec(head)<<'\n';

	return 0;
}
