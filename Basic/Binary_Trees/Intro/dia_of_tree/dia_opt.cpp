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

// pair with height and dia as members
std::pair<int, int> fastDia(node* root){
	std::pair<int, int> p;
	if(root == NULL){
		p.first = 0;
		p.second = 0;
		return p;
	}

	std::pair<int, int> left = fastDia(root->left);
	std::pair<int, int> right = fastDia(root->right);

	p.first = std::max(left.first, right.first) + 1;
	p.second = std::max(left.first + right.first , std::max(left.second, right.second));

	return p;

}

int main(){
	node* root = buildTree();

	bfs_level(root);

	std::pair<int, int> p = fastDia(root);
	std::cout<<"Height: "<<p.first<<'\n';
	std::cout<<"Dia: "<<p.second<<'\n';

	return 0;
}
