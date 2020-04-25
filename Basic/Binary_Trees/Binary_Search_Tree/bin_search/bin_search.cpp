#include<iostream>

class node{
	public:
	int val;
	node* left;
	node* right;

	node(int d){
		val = d;
		left = NULL;
		right = NULL;
	} 
};

node* insertBST(node* root, int val){
	if(root == NULL) return new node(val);

	if(val < root->val){
		root->left = insertBST(root->left, val);
	} else {
		root->right = insertBST(root->right, val);
	}

	return root;
}

node* buildBST(){
	int num;
	std::cin>>num;
	node* root = NULL;
	while(num--){
		int val;
		std::cin>>val;

		root = insertBST(root, val);
	}

	return root;
}

node* deleteInBst(node* root, int key){
	if(root == NULL) return NULL;
	if(root->val == key){
		// CASE 1
		if(root->right == NULL && root->left == NULL){
			 delete root;
			return NULL;
		}

		//CASE 2
		if(root->right == NULL && root->left != NULL){
			node* temp = root->left;
			delete root;
			return temp;
		}

		if(root->right != NULL && root->left == NULL){
			node* temp= root->right;
			delete root;
			return temp;
		}

		if(root->right != NULL && root->left != NULL){
		// Replace max from left
		/*	node* rep = root->left;
			while(rep->right != NULL) rep = rep->right;
			std::swap(rep->val, root->val);
			root->left = deleteInBst(root->left, key);
			return root;
		*/


		// Replace min from right
			node* rep = root->right;
			while(rep->left != NULL) rep = rep->left;
			std::swap(root->val, rep->val);
			root->right = deleteInBst(root->right, key);
			return root;
		}
	}

	if(root->val > key){
		root->left = deleteInBst(root->left, key);
	} else {
		root->right = deleteInBst(root->right, key);
	}

	return root;
}

void pre(node* root){
	if(root == NULL) return;

	std::cout<<root->val<<" ";
	pre(root->left);
	pre(root->right);
}

int main() {
	node* root =buildBST();
//	pre(root);

	int n;
	std::cin>>n;
//std::cout<<'\n'<<n;
	while(n--){
		int val;
		std::cin>>val;
		root = deleteInBst(root, val);
	}

	pre(root);
	return 0;
}
