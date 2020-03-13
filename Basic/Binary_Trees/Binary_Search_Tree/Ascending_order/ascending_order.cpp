#include<iostream>
#include<queue>

class node{
	public:
		int data;
		node* right = NULL;
		node* left = NULL;

		node(int d){
			data = d;
		}
};

node* buildBst(node* root, int val){
	if(root == NULL){
		return new node(val);
	}

	if(val > root->data){
		root->right = buildBst(root->right, val);
	} else {
		root->left = buildBst(root->left, val);
	}

}

void bfs_level(node* root){
	std::queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* val = q.front();
		if(q.front() == NULL){
			q.pop();
			std::cout<<'\n';
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

void printAsc(node* root){
	if(root == NULL){
		return;
	}

//	if(root->left == NULL){
//		std::cout<<root->data;
//		return;
//	}

	printAsc(root->left);
	std::cout<<root->data<<" ";
	printAsc(root->right);

}

int main(){
	node* root = NULL;

	int val;
	std::cin>>val;

	while(val != -1){
		root = buildBst(root, val);
		std::cin>>val;
	}

	bfs_level(root);

	std::cout<<'\n'<<'\n';

	printAsc(root);
	return 0;
}
