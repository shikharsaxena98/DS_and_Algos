#include<iostream>
#include<cstring>

void google_case(char* str){
	int len {std::strlen(str)};
	str[0] = std::tolower(str[0]);
	for(int i=1; i<len; i++){
		if(str[i]==' '){
			str[i+1] = std::tolower(str[i+1]);
			i++;
		}
		else
			str[i] = std::toupper(str[i]);
	}
}

int main(){

	char str [100];
	std::cin.getline(str, 100);

	google_case(str);

	std::cout<<str<<'\n';
	return 0;
}
