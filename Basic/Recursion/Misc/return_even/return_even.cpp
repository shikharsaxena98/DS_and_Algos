#include<iostream>

int main(){
	int num;
	std::cin>>num;
	int fval =0;
	while(num){
		if(num%2 == 0)
			fval = fval*10 + num%10;
	
		num = num/10;
	}

	int val=0;
	while(fval){
		val = val*10 + fval%10;
		fval = fval/10;
	}
	std::cout<<val<<'\n';

	return 0;
}
