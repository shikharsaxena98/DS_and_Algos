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

node* buildBalanced(int* arr, int s, int e){
	if(s>e) return NULL;
	int mid = s+(e-s)/2;

	node* root = new node(arr[mid]);
	root->left = buildBalanced(arr, s, mid-1);
	root->right = buildBalanced(arr, mid+1, e);

	return root;

}

void preOrder(node* root){
	if(root == NULL) return;
	std::cout<<root->val<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

int main() {
	int n;
	std::cin>>n;
	int* arr =new int[n];
	for(int i=0; i<n; i++){
		std::cin>>arr[i];
	}

	node* root = buildBalanced(arr, 0, n-1);

	preOrder(root);



	return 0;
}
