#include<iostream>
#include<queue>
#include<vector>

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

	if(val == -1) return NULL;
	node* root = new node(val);

	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void preorder(node* root){
	if(root == NULL) return;

	std::cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){
	if(root == NULL) return;
	inorder(root->left);
	std::cout<<root->data<<" ";
	inorder(root->right);
}

void bfs(node* root){
	std::cout<<"BFS"<<'\n';
	std::queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();

		std::cout<<temp->data<<" ";
		//node* temp = q.front();
		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);

		q.pop();
	}
	std::cout<<'\n';
}

void bfsLevel(node* root){
	std::cout<<"BFS LEVEL"<<'\n';
	std::queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		if(q.front() == NULL){
			std::cout<<'\n';
			q.pop();
			if(!q.empty()) q.push(NULL);
		} else {
			node* temp = q.front();
			std::cout<<temp->data<<" ";
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);

			q.pop();
		} 

	}

}

std::vector<int> rightView(node* root){
	std::cout<<"RIGHT VIEW"<<'\n';

	std::vector<int> v;
	std::queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		int val;
		if(q.front() == NULL){
			v.push_back(val);
			q.pop();
			if(!q.empty()) q.push(NULL);
		} else {
			node* temp = q.front();
			val = temp->data;

			q.pop();
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
	}

	return v;
}


int main(){
	node* root = buildTree();
	bfs(root);
	bfsLevel(root);

	std::vector<int> v = rightView(root);
	for(int i=0; i<v.size(); i++){
		std::cout<<v[i]<<' ';
	}
	std::cout<<'\n';

	std::cout<<"PreOrder\n";
	preorder(root);
	std::cout<<'\n';

	std::cout<<"Inorder\n";
	inorder(root);
	std::cout<<'\n';

	return 0;
}


