#include<iostream>

class node{
	public:
		int val;
		node* next;

		node(int d): val(d), next(NULL){}
};

void insertTail(node* &head, int val){
	if(head == NULL) head = new node(val);
	else{
		node* temp = head;
		while(temp->next !=NULL){
			temp = temp->next;
		}

		temp->next =new node(val);
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
		std::cout<<head->val<<" ";
		head = head->next;
	}

	std::cout<<'\n';
}

void intersect(node* h1, node* h2, node* &temp){
	while(h1 != NULL && h2 != NULL){
		if(h1->val == h2->val){
			insertTail(temp, h1->val);
//			temp = temp->next;
			h1 = h1->next;
			h2 = h2->next;
		} else if(h1->val < h2->val){
			h1 = h1->next;
		} else if(h1->val > h2->val){
			h2= h2->next;
		}
	}

//	return temp;
}

int main(){
	node* head1 = NULL;
	buildLL(head1);

	node* head2 = NULL;
	buildLL(head2);

	node* temp = NULL;
	intersect(head1, head2, temp);

	printLL(temp);

	return 0;
}
