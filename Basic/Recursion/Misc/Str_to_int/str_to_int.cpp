#include<iostream>
#include<string>

void str_to_arr(std::string str, int* arr, int i){
	if(str[i] == '\0'){
		return;
	} else {
		arr[i] = (static_cast<int> (str[i]) - 48);
		str_to_arr(str, arr, i+1);
	}
}

int main(){
	std::string str{};
	std::cin>>str;

	int arr[10];

	str_to_arr(str, arr, 0);
	for(int i=0; i<5; i++){
		std::cout<<arr[i]<<" ";
		
	}
	std::cout<<'\n';

	return 0;	
}
