#include<iostream>

class node{
	public:
		int data;
		node* left;
		node* right;

		node(int d){
			data = d;
			left=NULL;
			right = NULL;
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
}

void printTree(node* root){
	if(root == NULL){
		return;
	}

	std::cout<<root->data<<'\n';
	printTree(root->left);
	printTree(root->right);
}

int getHeight(node* root){
	int height;
	int height_l;	
	int height_r;
	
	if(root == NULL ){
		return 0;
	}

	height_r = getHeight(root->right);
	height_l = getHeight(root->left);
	
	height = height_l > height_r ? height_l : height_r;
	return height + 1;
}

int main(){
	node* root = buildTree();
	printTree(root);
	std::cout<<'\n';
	std::cout<<getHeight(root)<<'\n';

	return 0;
}
