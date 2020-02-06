#include<iostream>

int power(int val1, int val2){
	if(val2 == 1){
		return val1;
	} else if(val2 > 1){
		return val1*power(val1, val2-1);
	}
}

int main(){
	int val1, val2;
	std::cin>>val1>>val2;

	std::cout<<power(val1, val2)<<'\n';

	return 0;
}
