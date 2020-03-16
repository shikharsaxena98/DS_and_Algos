#include<iostream>

bool isPresent(std::string str1, std::string str2){
	int len1 = str1.length();
	if(len1 == 0){
		return true;
	};
//	std::cout<<str2.find(str1[0])<<'\n';
	// Can also be equated with str2.find(str1[0]) == std::string::npos
	if(str2.find(str1[0]) > str2.length()){
		return false;
		}
	return isPresent(str1.substr(1, len1-1), str2);
	
	}

int main(){
	std::string str1;
	std::string str2;

	std::cin>>str1;
	std::cin>>str2;

	isPresent(str1, str2) ? std::cout<<"True"<<'\n' : std::cout<<"Flase"<<'\n';
	return 0;
}
