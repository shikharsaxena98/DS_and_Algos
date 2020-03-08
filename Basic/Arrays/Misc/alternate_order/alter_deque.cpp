#include<iostream>
#include<deque>
#include<algorithm>

int main(){

	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}
	
	std::sort(arr, arr+len);
	std::deque<int> d;
	for(int i=0; i<len; i++){
		d.push_back(arr[i]);
	}

	for(int i=0; i<len; i=i+2){
		if(i != len-1){
		arr[i] = d.front();
		arr[i+1] = d.back();
		std::cout<<arr[i]<<" "<<arr[i+1]<<'\n';
		d.pop_front();
		d.pop_back();
		} else {
			arr[i] = d.front();
			d.pop_front();
		}
	}

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	delete arr;
	return 0;
}
