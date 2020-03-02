// Find nth ugly number
// ugly number is a number that has only 2, 3, 5 as prime factors

#include<iostream>

int divideMax(int a, int b){
	while(a%b == 0){
		a = a/b;
	}

	return a;
}

bool isUgly(int num){
	num = divideMax(num, 2);
	num = divideMax(num, 3);
	num = divideMax(num, 5);

	return (num == 1) ? true: false;
}

int main(){
	int num;
	std::cin>>num;
	int i = 1;
	int count {1};
	
	while(count != num){
		i++;
		if(isUgly(i)) count++;
	}	


	std::cout<<i<<'\n';

	return 0;
}
