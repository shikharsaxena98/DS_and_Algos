#include<iostream>

void findThought(int* score, int n, int* query, int q){
	int temp[n] {0};
	temp[0] = score[0];
	for(int i=1; i<n; i++){
		temp[i] = std::max(temp[i-1], score[i]);
//		std::cout<<temp[i]<<'\n';
	}

	for(int i=0; i<q; i++){
		if(i<q-1)
		std::cout<<temp[query[i]-1]<<"\n";
		else
			std::cout<<temp[query[i]-1]<<'\n';
	}
	//std::cout<<'\n';
}

int main(){
	int test;
	std::cin>>test;
	while(test--){
	int n, q;
	std::cin>>n>>q;

	int* score = new int[n];
	int* query = new int[q];

	for(int i=0; i<n; i++){
		std::cin>>score[i];
	}

	for(int i=0; i<q;i++){
		std::cin>>query[i];
	}
	
	findThought(score, n, query, q);
	
	}

	return 0;
}
