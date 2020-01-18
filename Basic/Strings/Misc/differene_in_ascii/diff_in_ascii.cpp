// For a given input string add the difference of ascii charecters 
// in between the charecters

#include<iostream>
#include<string>

int main(){
	std::string str;
	std::cin>>str;

	int len {str.length()};
	
	std::string fstr {};
	fstr.append(str, 0, 1);
	
	for(int i=0; i<len-1; i++){
		
		fstr.append(std::to_string(str[i+1] - str[i]));
		fstr.append(str, i+1, 1);
	}

	std::cout<<fstr<<'\n';

	return 0;
}
