#include<iostream>
#include<string>

std::vector<std::string> vec;

std::string get_substr(std::string str){
	if(str.length() <= 1){
		return str;
	}

	vec.push_back(str.substr(0, 1) + get_substr(str.substr(1, str.length() -1)));
	vec.push_back(get_substr(str.substr(1, str.length() -1)));
	

}

int main(){
	std::string str;
	getline(std::cin, str);
	
	std::vector<std::string> vec = get_substr(str);

	for(int i=0; i<vec.size(); i++){
		std::cout<<vec[i]<<'\n';
	}
	return 0;
}
