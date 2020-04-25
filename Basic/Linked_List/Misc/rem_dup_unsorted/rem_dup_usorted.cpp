#include<iostream>
#include<unordered_map>

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

	else{
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

void rem_dup(node* head){
	std::unordered_map<int, int> um;
	um[head->data]++;
	while(head->next != NULL){
		if(um.count(head->next->data)){
			node* nxt = head->next->next;
			delete head->next;
			head->next = nxt;
		} else {
			head = head->next;
			um[head->data]++;
		}
	}
}

int main(){
	node* head = NULL;
	buildLL(head);
	printLL(head);

	rem_dup(head);
	printLL(head);

	return 0;
}
