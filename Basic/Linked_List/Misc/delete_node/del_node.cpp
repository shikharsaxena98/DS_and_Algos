#include<iostream>

class node{
	public:
		int val;
		node* next;

		node(int data){
			val = data;
			next = NULL;
		}
};

void insert_tail(node* &head, int val){
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

void insert_head(node* &head, int val){
	if(head == NULL){
		head = new node(val);
		return;
	}

	node* new_node = new node(val);
	new_node->next = head;
	head = new_node;
}

void buildLL(node* &head){
	int temp;
	std::cin>>temp;
	while(temp != -1){
		insert_tail(head, temp);		
		std::cin>>temp;
	}
}

void printLL(node* head){
	while(head!= NULL){
		std::cout<<head->val<<" ";
		head =head->next;
	}
	std::cout<<'\n';
}

void del_val(node* &head, int val){
	if(head->val == val){
		node* temp = head;
		head = head->next;
		delete temp;
		return;
	}
	node* temp = head;

	// Did not handle memory leak
	while(temp->next != NULL){
		if(temp->next->val == val){
			temp->next = temp->next->next;
		}else {
			temp = temp->next;
		}

	}
}

int main(){
	node* root=NULL;
	buildLL(root);
	printLL(root);
	int val;
	std::cin>>val;
	del_val(root, val);
	printLL(root);

	std::cin>>val;
	insert_head(root, val);
	printLL(root);
	return 0;
}
