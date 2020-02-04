#include<iostream>

int findGCD(int num1, int num2){

//	return num2 ==0? num1 : findGCD(num2, num1%num2);
	if(num1%num2 == 0){
		return num2;
	} else {
		findGCD(num2, num1%num2);
	}

}

int main(){
	int num1;
	int num2;
	
	std::cin>>num1>>num2;

	std::cout<<findGCD(num1, num2)<<'\n';
	return 0;
}
