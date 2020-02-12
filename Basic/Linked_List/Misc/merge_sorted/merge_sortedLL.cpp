#include<iostream>

class node{
	public:
		int data;
		node* next;

		node(int d){
			data = d;
		}
};

void insertTail(node* &head, int val){
	if(head == NULL){
		head = new node(val);
	} else{
		node* temp= head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = new node(val);
	}
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
		std::cout<<"==>"<<head->data;
		head = head->next;
	}
	std::cout<<'\n';
}
node* mergeLL(node* head, node* head2){
	node* a= NULL;

	if(head == NULL && head2 == NULL){
		return a;
	}

	if(head != NULL && head2 != NULL){
	
		if(head->data >= head2->data){
			a = head2;
			a->next = mergeLL(head, head2->next);
		} else {
			a = head;
			a->next = mergeLL(head->next, head2);
		}

	} else if(head == NULL && head2 != NULL){
		
		a = head2;
		a->next = mergeLL(head, head2->next);

	} else if(head != NULL && head2 == NULL){
		
		a = head;
		a->next = mergeLL(head->next, head2);
	}

	return a;
}

int main(){
	node* head = NULL;
	node* head2 = NULL;

	buildLL(head);
	printLL(head);

	buildLL(head2);
	printLL(head2);

	node* merge = mergeLL(head, head2);
	printLL(merge);

	return 0;
}
