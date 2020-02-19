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

node* buildFromIn_Pre(int* pre, int* in, int s, int e){
	static int i=0;

	if(s>e){
		return NULL;
	}

	node* root = new node(pre[i]);

	//int idx = -1;
	
	int j;
	for(j=s; j<=e; j++){
		if(in[j] == pre[i]){
			break;
		}
	}
	i++;
	root->left = buildFromIn_Pre(pre, in, s, j-1);
	root->right = buildFromIn_Pre(pre, in, j+1, e);
	return root;

}

void bfs_level(node* root){
	std::queue<node*> q;
	q.push(root);
	q.push(NULL);

	if(root == NULL){
		return;
	}

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

int main(){
	int pre[] = {1,2,3,4,8,5,6,7};
	int in[] =  {3,2,8,4,1,6,7,5};

	node* root = buildFromIn_Pre(pre, in, 0, 6);

	bfs_level(root);


	return 0;
}
