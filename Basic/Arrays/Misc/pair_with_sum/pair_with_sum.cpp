#include<iostream>

std::pair<int, int> find_pair_idx(int* arr, int len, int k){
	std::pair<int, int> p = {-1, -1};
	int one = 0;
	int two = len-1;
	while(one < two){
		if(arr[one] + arr[two] == k){
			p.first = one;
			p.second = two;
			return p;
		} else if (arr[one] + arr[two] > k){
			two--;
		} else {
			one++;
		}
	}


	return p;
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int k;
	std::cin>>k;

	std::pair<int, int> p =find_pair_idx(arr, len, k);

	std::cout<<p.first<<'\n';
	std::cout<<p.second<<'\n';

	return 0;
}
