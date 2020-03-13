#include<iostream>

int findWinner(int* rad, int* geet, int* extra, int n, int m){
	int count_r = 0;
	int count_g = 0;
	int k = 0;
	int j = n;
	int l = n;
	int i=0;
	while(i<(n+m/2)){
		if(rad[i] > geet[i]){
			count_r++;
			if(k<m){
				rad[j++] = extra[k++];
				geet[l++] = extra[k++];
			} 
		} else { 
			count_g++;
			if(k<m){
				geet[l++] = extra[k++];
				rad[j++] = extra[k++];
			}

		}
//		std::cout<<count_r<<"         "<<count_g<<'\n';
//		std::cout<<"I: "<<i<<" k:"<<k<<'\n';
		i++;
	}

//	std::cout<<count_r<<"       "<<count_g<<'\n';

	if(count_r > count_g){
		return 1;
	} else if(count_r < count_g){
		return -1;
	} else {
		return 0;
	}
}

int main(){
	int test;
	std::cin>>test;

	while(test--){
		int n;
		int m;
		std::cin>>n>>m;
		int* rad = new int[n+m/2];
		int* geet = new int[n+m/2];
		int* extra = new int[m];

		for(int i=0;i<n;i++){
			std::cin>>rad[i];
		}

		for(int i=0; i<n;i++){
			std::cin>>geet[i];
		}

		for(int i=0; i<m; i++){
			std::cin>>extra[i];
		}

		if(findWinner(rad, geet, extra, n, m) == 1){
			std::cout<<"Radhesh wins"<<'\n';
		} else if(findWinner(rad, geet, extra, n, m) == -1){
			std::cout<<"Geethakoomaree wins"<<'\n';
		} else if(findWinner(rad, geet, extra, n, m) == 0){
			std::cout<<"Tie"<<'\n';
		}
	

	}

	return 0;
}
