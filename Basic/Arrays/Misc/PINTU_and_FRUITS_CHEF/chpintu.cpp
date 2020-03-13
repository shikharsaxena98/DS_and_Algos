#include<iostream>

bool isPresent(int tp, int* fruits, int bas){
	for(int i=0; i<bas; i++){
		if(fruits[i] == tp){
			return true;
		}
	}

	return false;
}

int findMin(int* fruits, int* price, int bas, int frt_num){
	int temp[frt_num+1] {0};

	for(int i=0; i<bas; i++){
		temp[fruits[i]] += price[i];
	}

//	for(int i=0; i<=frt_num;i++ ){
//		std::cout<<temp[i]<<" ";
//	}
//	std::cout<<'\n';

	int min=1000;

	for(int i=0; i<=frt_num; i++){

		if(isPresent(i, fruits, bas) && (temp[i] < min)){
			min = temp[i];
		}
	}

	return min;

}

int main(){
	int test;
	std::cin>>test;

	while(test--){
		int bas;
		int frt_num;

		std::cin>>bas>>frt_num;

		int* fruits= new int[bas];
		int* price = new int[bas];

		for(int i=0; i<bas; i++){
			std::cin>>fruits[i];	
		}

		for(int i=0; i<bas; i++){
			std::cin>>price[i];
		}

		std::cout<<findMin(fruits, price, bas, frt_num)<<'\n';
	}

	return 0;
}
