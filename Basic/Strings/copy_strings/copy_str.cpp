#include<iostream>

void copy_str(char* str1, char* str2){
	int i {0};
	while(str1[i] != '\0'){
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';

}

int main(){
	char str1[] = "Hello";
	char str2[10];

	copy_str(str1, str2);

	std::cout<<str2;
	return 0;
}
