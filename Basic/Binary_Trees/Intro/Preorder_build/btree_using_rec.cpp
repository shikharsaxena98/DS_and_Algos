#include<iostream>

class node{
	public:
		int data;
		node* left;
		node* right;

		node(int d){
			data =d;
			left = NULL;
			right = NULL;
		}
};

node* buildTree(){
	int d;
	std::cin>>d;

	if(d==-1){
		return NULL;
	}

	node* root = new node(d);
	root->left = buildTree();
	root->right= buildTree();
	return root;

}
// Pre Order Traversal

void printTree(node* root){
	if(root == NULL){
		return;
	}

	std::cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}

void printInOrder(node* root){
	if(root == NULL){
		return;
	} 
	printInOrder(root->left);
	std::cout<<root->data<<" ";
	printInOrder(root->right);
}

void printPost(node* root){
	if(root == NULL){
		return;
	}

	printPost(root->left);
	printPost(root->right);
	std::cout<<root->data<<" ";
}


int main(){
	node* root=buildTree();
	//Pre Order
	printTree(root);
	std::cout<<'\n';
	// In Order
	printInOrder(root);
	std::cout<<'\n';
	// Post Order
	printPost(root);
	
	return 0;
}
