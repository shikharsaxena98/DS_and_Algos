// Given a number:
// 	Operations allowed:
// 	1. subtract 1
// 	2. divide by 2
// 	3. divide by 3
// Find the min steps to reduce num to 1

#include<iostream>

int minStep(int num){
	// Base
	if(num == 1){
		return 0;
	}
	
	int step = minStep(num-1);
	if(num%2 ==0)
	step = std::min(step, minStep(num/2));	

	if(num%3  == 0)
	step = std::min(step, minStep(num/3));

	return 1+ step;
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<minStep(num)<<'\n';
	return 0;
}
