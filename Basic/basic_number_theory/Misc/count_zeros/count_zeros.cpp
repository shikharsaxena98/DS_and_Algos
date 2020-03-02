#include<iostream>

// Recursive
int countnum(int num){
	if(num == 0){
		return 0;
	} 
	//static int numz {0};

	if(num%10 == 0){
		return 1+ countnum(num/10);
	} else {
		return countnum(num/10);
	}

}

int main(){
	int num;
	std::cin>>num;
	
	int count {0};

	std::cout<<countnum(num)<<'\n';

	while(num){
		if(num%10 == 0) count++;
		num /= 10;
	}

	std::cout<<count<<'\n';
	return 0;
}
