#include<iostream>
class node{
	public:
	int val;
	node* left;
	node* right;

	node(int d){
		val = d;
		left=NULL;
		right = NULL;
	}
};

node* buildTree(){
	int val;
	std::cin>>val;

	if(val == -1) return NULL;
	node* root = new node(val);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}



void rightView(node* root, int level){
	static int max_level = -1;
	if(root == NULL) return;
	if(level > max_level){
		std::cout<<root->val<<" ";
		max_level = level;
	}

	rightView(root->right, level+1);
	rightView(root->left, level+1);
}


int main() {
	node* root = buildTree();
	rightView(root, 0);
	return 0;
}
