#include<iostream>
#include<deque>

void max_in_k(int* arr, int len, int* farr, int k){
	std::deque<int> d;
	int i=0;
	for(i=0; i<k; i++){
		while(!d.empty() && arr[d.back()] < arr[i]){
			d.pop_back();
		}
		d.push_back(i);
	}

	int l=0;
	for(; i<len; i++){
		farr[l++] = arr[d.front()];
		while(d.front() <= i-k){
			d.pop_front();
		}
		while(!d.empty() && arr[i] > arr[d.back()]){
			d.pop_back();
		}		
		d.push_back(i);
	}

}

int main(){
	int len;
	std::cin>>len;

	int* arr =new int[len];
	for(int i=0;i <len; i++){
		std::cin>>arr[i];
	}

	int k;
	std::cin>>k;

	int* farr = new int[len - k + 1] {0};

	max_in_k(arr, len, farr, k);

	for(int i=0; i<len-k+1; i++){
		std::cout<<farr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
