#include<iostream>
#include<vector>
#include<algorithm>

void upheapify(std::vector<int> &heap, int idx){
	if(idx ==0){
		return;	
	}

	if(heap[idx] > heap[(idx-1)/2]){
		std::swap(heap[idx], heap[(idx-1)/2]);
		upheapify(heap, (idx-1)/2);
	}

	else{
		return;
	}
}

void downheapify(std::vector<int> &heap, int idx){
	if(2*idx+2 > heap.size() -1){
		return;
	}
	
	if(heap[idx] < heap[2*idx + 1]){
		std::swap(heap[idx], heap[2*idx+1]);
		downheapify(heap, 2*idx+1);
	} 

	if(heap[idx] < heap[2*idx+2]){
		std::swap(heap[idx], heap[2*idx+2]);
                downheapify(heap, 2*idx+2);
	}

	return;
}

void insert(std::vector<int> &heap, int val){
	heap.push_back(val);
	upheapify(heap, heap.size()-1);
}

void del(std::vector<int> &heap){
	std::swap(heap[0], heap[heap.size() -1]);
	heap.pop_back();
	downheapify(heap, 0);
}

void display(std::vector<int> heap){
	for(int i=0; i<heap.size(); i++){
		std::cout<<heap[i]<<" ";
	}
	std::cout<<'\n';
}

int main(){
	std::vector<int> heap;
	
	int num;
	std::cin>>num;

	while(num>0){
		int val;
		std::cin>>val;

		insert(heap, val);
		display(heap);
		num--;
	
	}

	del(heap);
	display(heap);
	
	std::cout<<is_heap(heap.begin(), heap.end());
	return 0;
}
