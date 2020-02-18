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
	std::queue<node*> q;

	if(root == NULL){
		return;
	}

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
			std::cout<<val->data<<' ';
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

int longest_path(node* root){
	if(root == NULL){
		return 0;
	}

	int lval = longest_path(root->left);
	int rval = longest_path(root->right);

	int maxval = lval>rval?lval: rval;

	return 1+maxval;
}

int dia(node* root){
	int lval = longest_path(root->left);
	int rval = longest_path(root->right);
	return lval+rval;
}

int diameter(node* root){
	int op1 =dia(root);
	int op2 = dia(root->left);
	int op3 = dia(root->right);

	return std::max(op1, std::max(op2, op3));
}


int main(){
	node* root=buildTree();
	bfs_level(root);

	int dia_v = dia(root);

	std::cout<<"Dia: "<<dia_v<<'\n';
	return 0;
}
