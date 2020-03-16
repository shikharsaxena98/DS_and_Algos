#include<iostream>

int countAbc(std::string str){
	if(str.length() < 3) return 0;

	if(str.substr(0, 3) == "abc") return 1 + countAbc(str.substr(3, str.length() - 3));

	return countAbc(str.substr(1, str.length() - 1));
}

int main(){
	std::string str;
	std::cin>>str;

	std::cout<<countAbc(str)<<'\n';

	return 0;
}
