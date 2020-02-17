#include<iostream>
#include<queue>

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
	//std::cout<<"Building"<<'\n';
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

void bfs(node* root){
	std::cout<<"BFS: ";
	std::queue<node*> q;
	q.push(root);
//	std::cout<<q.size();
	while(!q.empty()){
		node* val = q.front();
		std::cout<<val->data<<" ";

		q.pop();

		if(val->left){
			q.push(val->left);
		}

		if(val->right){
			q.push(val->right);
		}
	}

	return;
}

void bfs_level(node* root){
	std::queue<std::pair<node*, int>> q;

}

int main(){
	node* root=buildTree();
	std::cout<<"Built"<<"\n";
	bfs(root);

	return 0;	
}

