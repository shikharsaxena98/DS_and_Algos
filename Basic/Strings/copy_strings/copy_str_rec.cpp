// Recursive program
#include<iostream>

int copy_str(char* str1, char* str2, int index){
	str2[index] = str1[index];
	if(str1[index] == '\0'){
		return 0;
	} else {
		index++;
		copy_str(str1, str2, index);
	}

}

int main(){
	char str1[] = "Hello";
	char str2[] = "NEWWORDBRO";

	copy_str(str1, str2, 0);
	std::cout<<str2<<"\n";
	
	return 0;
}
