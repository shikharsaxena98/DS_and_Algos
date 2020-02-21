#include<iostream>
#include<string>

char firstRepeating(std::string str){
	int arr[26] {0};
	for(int i=0; i<str.length(); i++){
		arr[static_cast<int>(str[i]) - 97]++;
	}

	for(int i=0; i<26; i++){
		//std::cout<<arr[i]<<" ";
		if(arr[i] == 1){
			return static_cast<char>(i+97);
		}
	}
}

int main(){
	std::string str;
	std::getline(std::cin, str);
	
	std::cout<<firstRepeating(str)<<'\n';
	
	return 0;
}
