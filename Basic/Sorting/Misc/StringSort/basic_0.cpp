#include<iostream>
#include<algorithm>
#include<string>

bool compare(std::string s1, std::string s2){
	return s1 < s2;
}

int main(){
	std::string data[] = {"orange", "apple", "banana", "pineapple"};

	std::sort(data, data+4, compare);

	for(int i=0; i<4; i++){
		std::cout<<data[i]<<'\n';
	}
}
