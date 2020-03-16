#include<iostream>

int countSeven(int num){
	if(num == 0){
		return 0;
	}

	if(num%10 == 7){
		return 1 + countSeven(num/10);
	}
	
	return countSeven(num/10);
}


int main(){
	int num;
	std::cin>>num;

	std::cout<<countSeven(num)<<'\n';
	return 0;
}
