// Find the charecter with max frequency in a string
//Input: lowercase string

#include<iostream>
#include<cstring>

int find_max_idx(int* arr, int len){
	int ret_val {0};
	for(int i=1; i<len; i++){
		if(arr[i]>arr[ret_val]){
			ret_val=i;
		}
	}

	return ret_val;
}

void print_arr(int* arr, int len){
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	} 
	std::cout<<'\n';
}

char find_max_freq(char* str){
	char fval;
	int len {strlen(str)};
	int arr[26] {0};	
	
	for(int i=0; i<len; i++){
		arr[str[i] - 'a']++; 
	}
	
	print_arr(arr, len);

	fval = char(97+find_max_idx(arr, 26));
	return fval;
}

int main(){
	char str[1000] = {};
	std::cin.getline(str, 1000);
	
	std::cout<<find_max_freq(str)<<'\n';
	
	return 0;
}
