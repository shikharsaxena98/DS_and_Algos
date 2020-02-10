#include<iostream>

class node{
	public:
		int data;
		node* next;
		
		node(int d){
			data =d;
		}
};

void printLL(node* head){
	while(head != NULL){
		std::cout<<"-->"<<head->data;
		head = head->next;
	}

	std::cout<<'\n';
	return;
}

void insertTail(node* &head, int num){
	if(head == NULL){
		head = new node(num);
	} else {
		node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = new node(num);
	}

	return;
}

void buildLL(node* &head){
        int num;
        std::cin>>num;

        while(num!=-1){
                insertTail(head, num);
                std::cin>>num;
        }

        return;
}

node* recRev(node* head){
	if(head == NULL || head->next ==NULL){
		return head;
	}
	
	node* hd = recRev(head->next);
	node* c = head;
	c->next->next = c;
	c->next = NULL;
	return hd;

}

int  main(){
	node* head = NULL;

	buildLL(head);
	printLL(head);

	head = recRev(head);
	printLL(head);

	return 0;
}
