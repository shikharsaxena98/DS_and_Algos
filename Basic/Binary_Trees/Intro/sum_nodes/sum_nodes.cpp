#include<iostream>

class node{
	public:
		int data;
		node* left;
		node* right;

		node(int d){
			data = d;
		}
};

node* buildTree(){
	int val;
	std::cin>>val;

	if(val == -1){
		return NULL;
	}

	node* root = new node(val);

	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void printTree(node* root){
	if(root == NULL){
		return;
	}

	std::cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}

int sumNodes(node* root){
	if(root == NULL){
		return 0;
	}

	return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int main(){
	node* root = buildTree();
	printTree(root);
	std::cout<<'\n'<<"Total nodes sum: "<<'\n';

	std::cout<<sumNodes(root)<<'\n';

	return 0;
}
