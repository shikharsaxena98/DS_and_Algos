#include<iostream>
#include<algorithm>
#include<vector>

void findk(std::vector<int> v, int k){
	std::make_heap(v.begin(), v.end());

	for(int i=0; i<k; i++){
		std::cout<<v.front()<<" ";
		std::pop_heap(v.begin(), v.end());
		v.pop_back();
	}
}

int main(){
	std::vector<int> v;

	int len;
	std::cin>>len;

	for(int i=0; i<len; i++){
		int temp;
		std::cin>>temp;
		v.push_back(temp);
	}

	findk(v, 4);
	return 0;
}
