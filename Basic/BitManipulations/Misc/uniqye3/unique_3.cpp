#include<iostream>
#include<algorithm>
int getUnique(int* arr, int len){
	int cnt[64] = {0};

	for(int i=0; i<len; i++){
		int j=0;
		int num = arr[i];

		while(num > 0){
			num = num >> j;
			cnt[j] += (num & 1);
			j++;
		}
	}

	//std::reverse(cnt, cnt+len);

	int val=0;
	int pow = 1;
	for(int i=0; i<64; i++){
		if(cnt[i] % 3 == 1){
			val += 1 * pow;
		}
		pow = 2*pow;
	}

	return val;
}


int main() {
	int len;
	std::cin>>len;

	// Dynamic allocation and taking input
	int* arr= new int[len];
	for(int i=0; i<len; i++) std::cin>>arr[i];

	std::cout<<getUnique(arr, len)<<'\n';

	return 0;
}
