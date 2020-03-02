#include<iostream>

int getNthUgly(int num){
	int* ugly = new int[num];
	ugly[0] = 1;
	int i2 = 0;
	int i3 = 0;
	int i5 =0;
	
	// Using Bottum up

	for(int i=1; i<num; i++){
		ugly[i] = std::min(ugly[i5]*5 , std::min(ugly[i2]*2 , ugly[i3]*3));
		
		if(ugly[i] == ugly[i2]*2) i2++;
		if(ugly[i] == ugly[i3]*3) i3++;
		if(ugly[i] == ugly[i5]*5) i5++;	
		std::cout<<ugly[i]<<'\n';
	}

	return ugly[num-1];
}

int main(){
	int num;
	std::cin>>num;

	std::cout<<getNthUgly(num)<<'\n';

	return 0;
}
