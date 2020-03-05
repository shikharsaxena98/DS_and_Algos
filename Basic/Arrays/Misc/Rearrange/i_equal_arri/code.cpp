#include<iostream>
#include<unordered_map>

void rearrange(int* arr, int len){
	std::unordered_map<int, int> m;
	for(int i=0; i<len; i++){
		m[arr[i]]++;
	}

//	std::cout<<m[-1]<<'\n';

	for(int i=0; i<len; i++){
		if(m[i] != 0){
			arr[i] = i;
		}
		else {
			arr[i] = -1;
		}
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}
	
	rearrange(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}

