// MAX HEAP

#include<iostream> 
#include<vector>

class node{
	public:
		int data;
		node* left;
		node* right;

		node(int val){
			data = val;
		}

};

void upheapify(std::vector<int> &heap, int idx){
	
	if(idx == 0){
		return;
	} 

	// Checking value at current idx and parent idx
	 
	if(heap[idx] < heap[(idx -1)/2]){
		return;
	}

	if(heap[idx] > heap[(idx-1)/2]){
		std::swap(heap[idx], heap[(idx-1)/2]);
		upheapify(heap, (idx-1)/2);
	}

	return;
}

void insert(std::vector<int> &heap, int val){
	heap.push_back(val);
	upheapify(heap, heap.size() -1);
}



void display(std::vector<int> heap){
	int s = heap.size();
	for(int i=0; i<s; i++){
		std::cout<<heap[i]<<" ";		
	}
	std::cout<<'\n';
}

int main(){
	std::vector<int> heap;
	int val;

	std::cin>>val;
	for(int i=0; i<val; i++){
		int x;
		std::cin>>x;

		insert(heap, x);
		display(heap);
	}

		

	return 0;	
}
