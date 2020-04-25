#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int d) : data(d),left(NULL),right(NULL){}
};

TreeNode* buildTree(){
    
    int val;
    std::cin>>val;

    if(val == -1) return NULL;

    TreeNode* root= new TreeNode(val);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void printPre(TreeNode* root){
    if(root == NULL) return;
    std::cout<<root->data<<"  ";
    printPre(root->left);
    printPre(root->right);
}   

void bfs(TreeNode* root){
	std::queue<TreeNode*> q;
	q.push(root);
	while(!q.empty()){
		TreeNode* temp = q.front();
		std::cout<<temp->data<<" ";
		
		if(temp->left){
			q.push(temp->left);
		}

		if(temp->right){
			q.push(temp->right);
		}

		q.pop();
	}
}

int main(){
    TreeNode* root = buildTree();
    printPre(root);
	
    bfs(root);
    return 0;
}

