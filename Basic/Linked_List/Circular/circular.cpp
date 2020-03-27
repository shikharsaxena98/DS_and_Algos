#include<iostream>

class Node{
	public:
	int data;
	Node* next;

	Node(int val){
		data = val;
		next = NULL;
	}
};

Node* buildLL(){
	int val;
	std::cin>>val;
	Node* root = new Node(val);
	Node* temp = root;
	std::cin>>val;
	while(val != -1){
		temp->next = new Node(val);
		temp = temp->next;
		std::cin>>val;	
	}
	
	temp->next = root;
	return root;
}

void printLL(Node* root){
	int count =0;
	while(root!= NULL && count <=10){
		std::cout<<root->data<<"==>";
		root= root->next;
		count++;
	}
}

int main(){
	Node* root =buildLL();
	printLL(root);
	return 0;
}

