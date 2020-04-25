#include<iostream>
#include<vector>
void printSpiralAnti(std::vector<std::vector<int>> v, int m, int n){
	int k = 0, j = 0;
	while(k<n && j<m){
		
		// Left COL
		for(int i=j; i<m; i++){
			std::cout<<v[i][k]<<", ";
		}
		k++;
	
		// BOTTOM ROW
		if(m-1 > j){
		for(int i=k; i<n; i++){
			std::cout<<v[m-1][i]<<", ";
		}
		m--;
		}
		
		// Right COL
		if(n-1 > k){
		for(int i=(m-1); i>=j; i--){
			std::cout<<v[i][n-1]<<", ";
		}
		n--;
		}
		
		// Top Row
		for(int i=(n-1); i>=k; i--){
			std::cout<<v[j][i]<<", ";
		}
		j++;
	}	
}

int main() {
	int m,n;
	std::cin>>m>>n;

	std::vector<std::vector<int>> v;
	for(int i=0; i<m; i++){
		std::vector<int> temp;
		for(int i=0; i<n; i++){
			int val;
			std::cin>>val;
			temp.push_back(val);
		}
		v.push_back(temp);
	}

	printSpiralAnti(v, m, n);

	return 0;
}
