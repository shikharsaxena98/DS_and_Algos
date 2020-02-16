#include<iostream>

class node{
	public:
		int data;
		node* left;
		node* right;


		node(int d){
			data = d;
			left = NULL;
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

int getH(node* root){
	int h;
	int h_l; 
	int h_r;

	if(root == NULL){
		return 0;
	}

	h_l = getH(root->left);
	h_r =getH(root->right);
	
	h = h_l > h_r ? h_l:h_r;
	return h + 1;
}

void printKth(node* root, int k){
	if(root == NULL){
		return;
	}

	if(k==1){
		std::cout<<root->data<<" ";
		return;
	}

	printKth(root->left, k-1);
	printKth(root->right, k-1);

}

void levelPrint(node* root){
	int h = getH(root);

	for(int i=1; i<=h; i++){
		printKth(root, i);
		std::cout<<'\n';
	}

}

int main(){
	node* root= buildTree();

	printTree(root);
	std::cout<<'\n';

	printKth(root, 3);
	std::cout<<'\n';

	levelPrint(root);
	std::cout<<'\n';

	return 0;
}
