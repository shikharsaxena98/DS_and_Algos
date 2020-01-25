// Find max value that can be obtained when any two numbrs are xored btw x and y

#include<iostream>
int maxVal(int x, int y){
	int max {0};
	int tmp {0};
	for(int i = x; i<=y; i++){
		for(int j = i; j<=y; j++){
		tmp = i ^ j;
		//std::cout<<i<<j<<tmp<<'\n';
		if(tmp > max){
			max = tmp;
			//std::cout<<'y';
		}
		}
	}

	return max;
}
int main () {
	int x, y;
	std::cin>>x>>y;
	std::cout<<maxVal(x, y)<<'\n';
	return 0;
}
