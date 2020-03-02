#include<iostream>

int memo[1000];

void _init(){
	for(int i=0 ; i<1000; i++){
		memo[i] = -1;
	}
}

int getmin(int num){


	if(num == 1){
		return 0;
	}
	
	if(memo[num] != -1){
		return memo[num];
	}

	int r = getmin(num -1);
	if(num % 2 == 0){
		r= std::min(r, getmin(num/2));
	}

	if(num % 3 == 0){
		r = std::min(r, getmin(num/3));
	}
		
	memo[num] = r+1;
	return r+1;

}

int main(){
	_init();
	int num;
	std::cin>>num;

	std::cout<<getmin(num)<<'\n';
	
	for(int i=0; i<=6; i++){
		std::cout<<memo[i]<<" ";
	}
	return 0;
}
