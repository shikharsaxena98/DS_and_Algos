#include<iostream>
#include<queue>
#include<vector>

class node{
	public:
		int data;
		node* left;
		node* right;

		node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};

node* insertInBst(node* root, int val){
	if(root ==NULL){
		root = new node(val);
		return root;
	}

	if(val > root->data){
		root->right = insertInBst(root->right, val);
	} else {
		root->left = insertInBst(root->left, val);
	}

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

std::vector<int> InorderVec(node* root){
	static std::vector<int> v;
	if(root == NULL){
		return v;
	}	

	v = InorderVec(root->left);
	v.push_back(root->data);
	v = InorderVec(root->right);

	return v;
}

int main(){
	std::vector<int> v;
	
	int temp {0};
	std::cin>>temp;
	
	while(temp!= -1){
		v.push_back(temp);
		std::cin>>temp;
	}
	
	node* root = NULL;
	int len = v.size();
/*	for(int i=0; i<len; i++){
		std::cout<<v[i];
	}*/
	for(int i=0; i<len; i++){
		root = insertInBst(root, v[i]);
	}
	std::cout<<"Built BST"<<'\n';
	bfs_level(root);
	std::vector<int> vec= {1,2,3,5,6,7};
	v = InorderVec(root);
	
	for(int i=0; i<len; i++){
                std::cout<<v[i]<<" ";
        }
	

	return 0;
}
