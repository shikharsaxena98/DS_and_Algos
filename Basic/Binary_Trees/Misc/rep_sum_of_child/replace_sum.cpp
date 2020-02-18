// Replace every node by sum of child nodes
#include<iostream>
#include<queue>

class node{
	public:
		int data;
		node* left;
		node* right;

		node(int d){
			data =d;
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

void bfs_level(node* root){
	if(root == NULL){
		return;
	}
	
	std::queue<node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* val = q.front();
		if(val == NULL){
			std::cout<<'\n';
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		} else {
			std::cout<<val->data<<" ";
			q.pop();

			if(val->left){
				q.push(val->left);
			}

			if(val->right){
				q.push(val->right);
			}
		}
	}

	return;
}

int child_sum(node* root){
	if(root== NULL){
		return 0;
	}
	
	return root->data + child_sum(root->left) + child_sum(root->right);
}

void rep(node* root){
	if(root == NULL){
		return;
	}

	if(root->data == child_sum(root));
	else{
		root->data = child_sum(root) - root->data;
		rep(root->left);
		rep(root->right);
	}
}

int main(){
	node* root = buildTree();

	bfs_level(root);
	
	rep(root);

	std::cout<<'\n'<<'\n';
	bfs_level(root);
	return 0;
}
