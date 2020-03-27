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
	//	std::cout<<"Got head"<<'\n';

	}
	//std::cout<<"Val added"<<'\n';
	node* temp = head;
	
	while(temp->next != NULL) temp = temp->next;

		temp->next = new node(val);
	}

void buildLL(node* &head){
	int d;
	std::cin>>d;

	while(d != -1){
		insertTail(head, d);
		std::cin>>d;
	//	std::cout<<"GOT"<<'\n';
	}
}

bool checkKey(node* head, int key){
	while(head != NULL){
		if(head->data == key) return true; 
		head = head->next;
	}

	return false;
}

int main(){
	node* head = NULL;
	buildLL(head);
	
	int key;
	std::cin>>key;
	checkKey(head, key) ? std::cout<<key<<" present"<<'\n' : std::cout<<key<<" not present\n";

	return 0;
}
