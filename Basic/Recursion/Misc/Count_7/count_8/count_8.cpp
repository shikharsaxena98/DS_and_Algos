#include<iostream>

int count_eight(int num){
	if(num ==0){
		return 0;
	}

	if(num%100 == 88){
		return 3 + count_eight(num/100);
	} else if(num%10 == 8){
		return 1 + count_eight(num/10);
	}

	return count_eight(num/10);
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<count_eight(num)<<'\n';
	return 0;
}
