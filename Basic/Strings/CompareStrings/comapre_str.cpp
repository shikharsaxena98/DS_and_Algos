#include<iostream>
#include<string>

void compStr(std::string str1, std::string str2){
	if(str1>str2){
		std::cout<<str2<<" is greater than "<<str2<<'\n';
	} else {
		std::cout<<str1<<" is greater than "<<str2<<'\n';
	}
}

int main(){
	std::string str1 {"blueprint"};
	std::string str2 {"bat"};
	std::string str3 {"apple"};
	std::string str4 {"chewbacca"};

	compStr(str3, str1);
	compStr(str2, str1);

	

	return 0;
}
