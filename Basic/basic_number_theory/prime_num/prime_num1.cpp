#include<iostream>

int main(){
	int num = 0;
	std::cin>>num;

	bool flag = true;
	for(int i=2; i<num;i++){
		if(num%i == 0){

			flag = false;
		}
	}

	if(flag){
		std::cout<<"Number is prime"<<'\n';
	} else  {
		std::cout<<"Number is not prime"<<'\n';

	}
	return 0;
}
