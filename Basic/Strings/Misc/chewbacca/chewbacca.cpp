#include<iostream>
#include<string>

std::string GetMin(long long int x){
	std::string str = std::to_string(x);
//	std::cout<<str.length();
	for(int i=0; i<str.length(); i++){
		//std::cout<<str[i]<<" ";
		if('9' - str[i] < str[i] - '0') str[i] = char(48 + ('9' - str[i]));
		else str[i] = char(48 + (str[i] - '0'));
	//	std::cout<<str[i]<<'\n';
	}
	//std::cout<<str;
	return str;
}

int main() {
	long long int x;
	std::cin>>x;
//	std::cout<<'9' - '5';
	std::cout<<GetMin(x)<<'\n';
	return 0;
}
