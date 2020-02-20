#include<iostream>
#include<queue>

class node{
	public:
 		int data;
		node* left;
		node* right;

		node(int d){
			data =d;
			left = NULL;
			right = NULL;
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
		if(q.front() == NULL){
			q.pop();
			std::cout<<'\n';
			if(!q.empty()){
				q.push(NULL);
			}
		} else {
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
	}
}

void swapLeaf(node* root){
	static int count =0;
	// Case1
	if(root== NULL){
		return;
	}

	static node* ptr1;
	static node* ptr2;
	//Case2
	if(root->left==NULL && root->right == NULL){
		if(count%2 == 0){
			ptr1 = root;
			count++;
		} else {
			ptr2 = root;
			count++;
		}

		if(count%2 == 0){
			std::swap(ptr1->data, ptr2->data);
		}
	}

	// Recursive
	if(root->left){
		swapLeaf(root->left);
	}

	if(root->right){
		swapLeaf(root->right);
	}
	


}

int main(){
	node* root = buildTree();

	bfs_level(root);
	
	swapLeaf(root);

	bfs_level(root);

	return 0;
}
