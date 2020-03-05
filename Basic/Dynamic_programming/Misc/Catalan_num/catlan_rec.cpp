#include<iostream>

long int getCatalan(int num){
	if(num <= 1){
		return 1;
	}
	
	long int val =0;
	for(int i=0; i<num; i++){
		val += getCatalan(num - i -1) * getCatalan(i); 
	}

	return val;
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<getCatalan(num)<<'\n';
	return 0;
}
