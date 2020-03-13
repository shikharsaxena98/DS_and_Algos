// Find path from left top to right bottom of a matrix


#include<iostream>

int findPath(int r, int c, int m, int n){
	if(r>=m || c>=n){
		return 0;
	}

	if(r==m-1 &&  c==n-1){
		return 1;
	}


	int num1= findPath(r+1, c, m , n);
	int num2= findPath(r, c+1, m, n);
//	int num3= findPath(r+1, c+1, m, n);
	
	return num1+num2; //+num3;

}

int main(){
	int m;
	int n;

	std::cin>>m>>n;

	std::cout<<findPath(0, 0, m, n)<<'\n';
	return 0;
}
