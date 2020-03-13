#include<iostream>

int sum_dig(int num){
	int s=0;
	std::cout<<num<<'\n';
	while(num){
		s+=num%10;
		num = num/10;
	}

	return s;
}	

int super_digit(int num, int k){
	//std::cout<<"SD"<<num<<'\n';
	
	if(num/10 <= 0){
		return num;
	}

	return super_digit(sum_dig(num) * k, 1);
}

int main(){
	int num;
	std::cin>>num;

	int k;
	std::cin>>k;

	std::cout<<super_digit(num, k)<<'\n';

	return 0;
}
