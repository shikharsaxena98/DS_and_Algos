#include<iostream>

int getmin(int num){
	int* arr = new int[num+1];

	arr[1] = 0;
	
	for(int i=2; i<=num; i++){
		arr[i] = 1 + arr[i-1]; 
		if(i%2 == 0){
			arr[i] = std::min(arr[i] , 1 + arr[i/2]);
		}

		if(i%3 ==0 ){
			arr[i] = std::min(arr[i], 1+ arr[i/3]);
		}
	}

	return  arr[num];
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<getmin(num)<<'\n';

	return 0;
}
