#include<iostream>
#include<algorithm>
#include<cmath>

bool mycomp(int a, int b){
	int num1 = a;
      	int num2 = b;
	
	int count1 = 0;
	int count2 = 0;
	while(num1%10 != 0){
		count1++;
		num1 /= 10; 
	}

	while(num2%10 != 0){
                count2++;
                num2 /= 10;
        }

	num1 = (a * std::pow(10, count2)) + b;
	num2 = (b*std::pow(10, count1)) + a;

//	std::cout<<num1<<" "<<num2<<'\n';

	if(num1 > num2){
		return true;
	}

	return false;
}

void findLargest(int* arr, int len){
	std::sort(arr, arr+len, mycomp);
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	findLargest(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";  
	}

	std::cout<<'\n';
	return 0;
}
