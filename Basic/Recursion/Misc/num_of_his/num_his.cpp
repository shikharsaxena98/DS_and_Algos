#include<iostream>
#include<string>

int numHi(std::string str){
	if(str.length() <= 1){
		return 0;
	}

	if(str.substr(0, 2) == "hi") return 1+numHi(str.substr(2, str.length() - 2));

	return numHi(str.substr(1, str.length() - 1));
}

int main(){
	std::string str1;
	std::cin>>str1;

	std::cout<<numHi(str1)<<'\n';	
	return 0;
}
