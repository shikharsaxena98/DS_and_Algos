#include<iostream>
#include<cmath>
long long int getVal(long long int num, int p){
	std::cout<<num<<'\n';
	return std::pow(num, p);
		
}

int main() {
	int test;
	std::cin>>test;
	while(test--){
		int k;
		long long int n;
		std::cin>>n>>k;
		std::cout<<n<<" "<<k<<'\n';
		int s=0;
		long long int e = n;
		long long int ans=0;
		while(s<=e){
			long long int m = (s+e)/2;
			std::cout<<m<<" ";
			if(getVal(m, k) <= n){
				ans = m;
				s = m+1;
			} else {
				e = m-1;
			}
		}
		std::cout<<ans<<"\n";
	}
	return 0;
}
