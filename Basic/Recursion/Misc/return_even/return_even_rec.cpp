#include<iostream>

int return_even(int num){
	if(num == 0){
		return 0;
	}

	if(num%2 == 1){
		return return_even(num/10);
	}

	if(num%2 == 0){
		return return_even(num/10)* 10 + num%10;
	}
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<return_even(num);

	return 0;
}
