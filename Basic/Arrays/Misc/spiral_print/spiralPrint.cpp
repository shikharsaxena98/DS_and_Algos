#include<iostream>
#include<vector>

int main(){
	int m;
	std::cin>>m;

	int n;
	std::cin>>n;

	int val;

	std::vector<std::vector<int>> v;
	for(int i=0; i<m; i++){
		std::vector<int> row;
		for(int j=0; j<n; j++){
			std::cout<<"Enter val in row: "<<j<<'\n';		
			std::cin>>val;
			row.push_back(val);
		}
		std::cout<<"Push row: "<<i<<'\n';
		v.push_back(row);
	}

	for(int i=0; i<v.size(); i++){
		if(i%2==0){
			for(int j=0; j<v[i].size(); j++){
				std::cout<<v[i][j]<<" ";
			}
		} else {
			for(int j=v[i].size() - 1; j>=0; j--){
				std::cout<<v[i][j]<<" ";
			}
		}
	}

	return 0;
}
