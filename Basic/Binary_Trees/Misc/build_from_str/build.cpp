#include<iostream>
#include<string>

using namespace std;

class node{
	public:
	int val;
	node* right;
	node* left;

	node(int d){
		val = d;
		right = NULL;
		left = NULL;
	}
};

node* buildTree(string str){
	
	if(str == "false") return NULL;
	
	int val;
	std::cin>>val;

	node* root = new node(val);

	string l;
	std::cin>>l;
	root->left = buildTree(l);

	string r;
	std::cin>>r;
	root->right = buildTree(r);

	return root;
	//std::cin>>val;
}

void pre(node* root){
	if(root == NULL) return;

	std::cout<<root->val<<" ";
	pre(root->left);
	pre(root->right);
}

int main() {
	node* root = buildTree("true");
	pre(root);
	return 0;
}
