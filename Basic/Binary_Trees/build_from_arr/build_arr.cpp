#include<iostream>

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
		
}



int main(){
	
}
