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

node* buildFromArr(int* arr, int s, int e){
	if(s>e){
		return NULL;
	}

	int mid = (s+e)/2;
		
	node* root = new node(arr[mid]);
        root->left = buildFromArr(arr, s, mid-1);
	root->right = buildFromArr(arr, mid+1, e);
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
}



int main(){
	int arr[] = {1,2,3,4,5,6,7, 8};

	node* root = buildFromArr(arr, 0, 7);

	bfs_level(root);
	
	return 0;
}
