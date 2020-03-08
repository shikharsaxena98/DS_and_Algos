#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> getAllSub(std::string str){
	std::vector<std::string> v;
	int len = str.length();

	for(int i=0; i<len; i++){
		for(int j = i; j<len; j++){
			v.push_back(str.substr(i, ))
		}
	}
}

int main(){
	std::string str;
	std::cin>>str;

	std::vector<std::string> v= getAllSub(str);
	
	for(int i=0; i<v.size(); i++){
		std::cout<<v[i]<<'\n';
	}
	std::cout<<'\n';
	return 0;

}
