#include<iostream>

int tile(int n, int m){
	if(n == 0 ) return 1;
	if(n<0) return 0;

	//std::cout<<n<<" "<<m<<'\n';
	return tile(n-m, m) + tile(n-1, m);

}

int main() {
	int n, m;
	std::cin>>n>>m;
	std::cout<<tile(n,m);
	return 0;
}
