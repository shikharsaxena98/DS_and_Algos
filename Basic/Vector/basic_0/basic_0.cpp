#include<iostream>
#include<vector>

int main(){
	std::vector<int> a;
	for(int i=0; i<=5; i++){
		a.push_back(i);
	}

	std::vector<int> b(3,0);

	b=a;

	for(int i=0; i<b.size(); i++){
		std::cout<<b[i]<<' ';
	}
	std::cout<<'\n';

	std::cout<<a.size()<<'\n';

	a.resize(2);

	std::cout<<a.size()<<" "<<b.size()<<'\n';

	return 0;
}
