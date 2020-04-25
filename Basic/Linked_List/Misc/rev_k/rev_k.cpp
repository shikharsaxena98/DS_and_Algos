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
	if(head == NULL) head = new node(val);
	else{
		node* temp = head;
		while(temp->next != NULL) temp = temp->next;
		temp->next = new node(val);
	}
}

void buildLL(node* &head, int n){
	while(n--){
		int val;
		std::cin>>val;
		insertTail(head, val);
	}
}

node* reverse(node* head, int num){
	node* prev = NULL;
	node* next = NULL;
	node* curr = head;
	while(curr != NULL || num != 0){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		num--;
	}

	return prev;
}

node* revRec(node* head, int k, int n){
	if(n == 0) return NULL;
	
	node* temp = head;
	int v= k;
	while(v--) temp =temp->next;

	node* curr = reverse(head, k);
	node* temp2 = curr;
	while(temp2->next != NULL) temp2 = temp2->next;
	temp2->next = revRec(temp, k, n-k);
	return curr;
}

void printLL(node* head){
	while( head != NULL){
		std::cout<<head->val;
		head = head->next;
	}

}

int main() {
	std::cout<<"HI"<<'\n';
	int n,k;
	std::cin>>n>>k;
	std::cout<<"HI\n";
	node* head=NULL;
	buildLL(head, n);
	
	std::cout<<"HI";
	node* rev = revRec(head, k, n);
	printLL(rev);
	return 0;
}
