// Find the two numbers that occur only once in the array
#include<iostream>

int getFirstSet(int n){
	int pos =0;

	while((n&1) == 0){
		pos++;
		n=n>>1;
	}
	return pos;
}

int main(){

	int arr[] = {5,1,2,1,2,3,5,7};
	int val {0};

	for(int i=0; i<8; i++){
		val = val ^ arr[i];
	}
	
	int idxSet = getFirstSet(val);
	
	int mask = 1<<idxSet;
	
	int tmp=0;
	for(int i=0; i<8; i++){
		if((arr[i] & mask) > 0){
			tmp = tmp^ arr[i];	
		}
	}

	int num_1 = val ^ tmp;
	int num_2 = val^ num_1;

	std::cout<<"Num1 : "<<num_1<<" Num2: "<<num_2<<'\n';

	return 0;
}
