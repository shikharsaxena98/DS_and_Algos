#include<iostream>
#include<vector>

int checkVal(std::vector<std::vector<int>> v, int n, int m, int key){
	std::cout<<n<<" "<<m<<'\n';
	if(n>=v.size() || m<0) return 0;

	if(v[n][m] == key) return 1;
//	if(n>=v.size() || m<0) return 0;

	if(v[n][m] > key) return checkVal(v, n, m-1, key);
	else return checkVal(v, n+1, m, key);
}

int main() {
	int n, m;
	std::cin>>n>>m;

	std::vector<std::vector<int>> v;
	for(int i=0; i<n; i++){
		std::vector<int> temp;
		for(int j=0; j<m; j++){
			int val;
			std::cin>>val;

			temp.push_back(val);
		}
		v.push_back(temp);
	}

	int key;
	std::cin>>key;

	std::cout<<checkVal(v, 0, m-1, key);

	return 0;
}
