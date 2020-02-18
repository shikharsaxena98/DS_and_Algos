#include<iostream>
#include<queue>

class node{
	public:
		int data;
		node* right;
		node* left;

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
	if(root== NULL){
		return;
	}

	std::cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}

int count(node* root){
	if(root == NULL){
		return 0;
	}
	//left count
	int l_c = count(root->left);
	int r_c = count(root->right);
	return 1+ l_c + r_c;
}

void bfs_level(node* root){
	std::queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* val = q.front();
		if(q.front() == NULL){
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
}

int main(){
	node* root = buildTree();
	printTree(root); //Preorder {root, left, right}
	std::cout<<"Node Count: "<<count(root)<<'\n';
	std::cout<<"BFS Level Print"<<'\n';
	bfs_level(root);

	return 0;
}
