#include<iostream>
#include<string>

int main(){
	std::string str;
	std::cin>>str;

	for(int i=0; i<str.length(); i++){
		if(str[i] == 'x') str[i] = 'y';
	}

	std::cout<<str<<'\n';
	return 0;
}
