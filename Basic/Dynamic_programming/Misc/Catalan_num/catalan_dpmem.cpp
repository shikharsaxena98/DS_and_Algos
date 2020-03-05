#include<iostream>

void _init(long int* arr, int num){
	for(int i=0; i<num; i++){
		arr[i] = -1;
	}
}

long int getCatalan(long int* arr, int num){
	
	if(arr[num] != -1){
		return arr[num];
	}
	


	for(int j=0; j<=num; j++){
		arr[j] += getCatalan(arr, j-1)*getCatalan(arr, num-1);
		
	}

	return arr[num]
}

int main(){
	int num;
	std::cin>>num;

	long int* arr = new long int[num+1] {0};
//	arr[0] = arr[1] = 1;
	_init(arr, num);
	arr[0] = arr[1] = 1;



	std::cout<<getCatalan(arr, num);

	return 0;
}
