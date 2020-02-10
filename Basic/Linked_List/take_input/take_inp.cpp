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
		node* val= head;
		while(val->next != NULL){
			val = val->next;
		}

		val->next = new node(data);
	return;	
	}
}

void printLL(node* head){
        while(head != NULL){
                std::cout<<head->data<<"--->";
                head = head->next;
        }
}


void buildLL(node* &head){
	int num;
	std::cin>>num;
	while(num != -1){
		insertTail(head, num);
		printLL(head);
		std::cin>>num;
	}
}

int main(){
	node* head = NULL;

	buildLL(head);

	printLL(head);
	
	return 0;
}
