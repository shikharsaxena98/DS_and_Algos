// Find teh number of squares that can be visited by
// the king in m moves

#include<iostream>

int find_blocks(int r, int c, int m){
	if(m ==0){
		return 1;
	}
	

	if(r >= 0 && r<8 && c>=0 && c<8){
		
	} else {
		return 0;
	}
}

int main(){
	int r;
	std::cin>>r;

	int c;
	std::cin>>c;

	int k;
	std::cin>>m;

	find_blocks(r, c, m);

	return 0;
}
