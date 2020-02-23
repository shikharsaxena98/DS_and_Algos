// all the smaller values should go to the left in a binry tree: BST

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

//Printing

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
	return;
}

void bfs(node* root){
	std::queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* val = q.front();
		std::cout<<val->data<<'\n';
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


// Insertion

node* insert_bst(node* root, int val){
	// Base Case
	if(root == NULL){
		root = new node(val); 
		return root;
	}
	
	// Rec Case
	if(root->data >= val){
		root->left =insert_bst(root->left, val);		
	} else if(root->data < val){
		root->right = insert_bst(root->right, val);
	}
	return root;
}

// Searching
bool search(node* root, int val){
	if(root == NULL){
		return false;
	}

	if(root->data == val){
		return true;
	}

	if(root->data > val){
		return search(root->left, val);
	} else if(root->data < val){
		return search(root->right, val);
	}
}

node* findMax(node* root){	
	if(root->right == NULL){
		return root;
	}

	return findMax(root->right);
}

node* del(node* root, int val){
	if(root== NULL){
		return NULL;
	}

	if(root->data > val){
		root->left = del(root->left, val);
	} else if(root->data == val){
		// Leaf Node
		if(root->left == NULL && root->right == NULL){
			delete root;
			return NULL;
		}
		// 1 child       
		if(root->left && root->right == NULL){
			node* temp = root->left;
			delete root;
			return temp;
		}

		if(root->right && root->left == NULL){
			node* temp = root->right;
			delete root;
			return root;
		}
		//2 or child

		node* rep = findMax(root->left);

		root->data = rep->data;

		root->left = del(rep, )

		delete rep;
		return root;

		
	} else {
		root->right = del(root->right, val)
	}

	return root;
}

int main(){
	node* root = NULL;
	int val;
	std::cin>>val;
	while(val != -1){

		root = insert_bst(root, val);
		std::cin>>val;
	}
	bfs(root);
	std::cout<<'\n'<<'\n';
	bfs_level(root);

	std::cout<<"Enter element to search:"<<'\n';
	int dat;
	std::cin>>dat;
	search(root, dat) ? std::cout<<"Present"<<'\n' : std::cout<<"Not Present"<<'\n';
	
	std::cout<<"max in bst: "<<'\n';
	std::cout<<findMax(root)->data<<'\n';

	return 0;
}


