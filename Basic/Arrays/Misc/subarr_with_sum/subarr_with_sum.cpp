// Consecutive element sub arr with  a target sum
#include<iostream>
#include<queue>

void subarr(int* arr, int len, int tar){
	std::queue<int> q;
	int curr {0};
	for(int i=0; i<len; i++){
		if(curr == tar){
			break;
		}

		curr += arr[i];
		q.push(arr[i]);

		while(curr > tar){
			curr -= q.front();
			q.pop();
		}


	}

	int s =q.size();
	for(int i=0; i<s; i++){
		std::cout<<q.front()<<" ";
		q.pop();
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int target;
	std::cin>>target;

	subarr(arr, len, target);

	return 0;
}
