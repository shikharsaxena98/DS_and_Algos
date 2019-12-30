#include<iostream>
#include<cstring>

void swap(char* val1, char* val2){
	char temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void rev_str(char* str, int len){
	for(int i =0; i<len/2; i++){
		swap(&str[i], &str[len-i-1]);
	}
}


int main(){
	char str[] = "Welcome";
	long int len {std::strlen(str)};
	std::cout<<str<<"\n";
	rev_str(str, len);

	std::cout<<str<<"\n";

	return 0;
}
