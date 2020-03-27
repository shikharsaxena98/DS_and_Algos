#include<iostream>
#include<vector>
#include<algorithm>
std::vector<int> getBits(int num){
	std::vector<int> v;
        while(num){
           	v.push_back(num & 1);
//		std::cout<<num<<' ';
		num = num >> 1; 
//		std::cout<<num<<'\n';
	
	}
	std::reverse(v.begin(), v.end());
	return v;
}

int main(){
	int num;
	std::cin>>num;

	std::vector<int> v =getBits(num);
	for(int i =0; i<v.size(); i++){
		std::cout<<v[i]<<" ";
	}
	std::cout<<'\n';
	return 0;
}
