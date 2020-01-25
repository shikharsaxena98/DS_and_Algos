#include<iostream>

bool isOdd(int val){
	return (val & 1);
}

int main(){
	int val {};
	std::cin>>val;
	if(isOdd(val)){
		std::cout<<"Odd"<<'\n';

	} else {
		std::cout<<"Even"<<'\n';
	}
	return 0;
}
