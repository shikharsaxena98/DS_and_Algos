#include<iostream>
#include<vector>

int numBits(int num){
	int count = 0;
	while(num){
		if(num&1 == 1) count++;
	//	std::cout<<num;
		num = num>>1;
	}

	return count;
}

std::vector<int> CountBits(int num){
	std::vector<int> v;
	
	for(int i=0; i<=num; i++){
		//std::cout<<i<<"     ";
		v.push_back(numBits(i));
	}

	return v;
}

int main(){
	int num;
	std::cin>>num;

	std::vector<int> v = CountBits(num);
	for(int x:v){
		std::cout<<x<<" ";
	}
	std::cout<<'\n';
	return 0;
}
