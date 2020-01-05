// Check if a string is permutation of the other
#include<iostream>
#include<string>

bool isPerm(std::string s1, std::string s2){
	if(s1.length() != s2.length()){
		return false;
	}
	

	int arr[26] {0};
	
	int i=0;
	while(s1[i] != '\0'){
		arr[s1[i] - 'a']++;
		
		i++;
	}
	
	i= 0;
	while(s2[i] != '\0'){
		arr[s2[i] - 'a']--;

		i++;
	}
	
	for(i=1; i<26; i++){

		arr[i] = arr[i] + arr[i-1];
	}

	if(arr[i-1] == 0){
		return true;
	}

	return false;
}

int main(){
	std::string s1 {"ello"};
	std::string s2 {"lloe"};

	std::cout<<isPerm(s1, s2)<<'\n';

	return 0;
}
