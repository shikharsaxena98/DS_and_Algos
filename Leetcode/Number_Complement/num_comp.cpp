#include<iostream>
#include<cmath>
int findComplement(int num ){
	int num_bits = std::log2(num);
	for(int i=0; i<=num_bits; i++){
		num = num ^ (1<<i);
	}
	return num;
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<findComplement(num)<<'\n';
}
