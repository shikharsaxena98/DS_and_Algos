#include<iostream>
long int getCatalan(int num){
	long int* cat = new long int[num];
	cat[0] = cat[1] = 1;

	for(int i=2; i<num; i++){
		cat[i] = 0; 
		for(int j=0; j<i; j++){
			cat[i] += cat[j]* cat[i-j-1];
		}
//		std::cout<<cat[i]<<'\n';
	}

	return cat[num-1];
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<getCatalan(num)<<'\n';

	return 0;
}
