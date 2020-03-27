#include<iostream>
#include<vector>

int main(){
	std::vector<int> a;
	for(int i=0; i<=5; i++){
		a.push_back(i);
	}

	for(auto it = a.begin(); it!=a.end(); it++){
		std::cout<<*it<<"  ";
	}
	std::cout<<'\n';

	std::vector<int> b(3,0);

	for(int i=0; i<b.size(); i++){
		std::cout<<b[i]<<" ";
	}
	std::cout<<'\n';

	b=a;

	for(int i=0; i<b.size(); i++){
		std::cout<<b[i]<<' ';
	}
	std::cout<<'\n';

	std::cout<<a.size()<<'\n';

	a.resize(2);

	std::cout<<a.size()<<" "<<b.size()<<'\n';

	std::vector<int> d {10,13,24,56,87,76};
	for(int x: d){
		std::cout<<x<<' ';
	}
	std::cout<<'\n';
	return 0;
}
