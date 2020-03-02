#include<iostream>
#include<algorithm>
#include<queue>

bool compare(int a, int b){
	return a>b;
}

int main(){
	int N;
	int Q;

	std::cin>>N;
	std::cin>>Q;

	int* arrl = new int[N];
	for(int i=0; i<N; i++){
		std::cin>>arrl[i];
	}

	std::sort(arrl, arrl+N, compare);

	for(int i=0; i<Q;  i++){
		
	}

	return 0;
}
