#include<iostream>

int main(){
	int test;
	std::cin>>test;

	while(test){
		int req;
		std::cin>>req;

		int availp;
		std::cin>>availp;

		int freq = req - availp;
		
//		long long int numbooks;
//		std::cin>>numbooks;

		int availk;
		std::cin>>availk;
		
		long long int numbooks;
        	std::cin>>numbooks;


//		std::pair<int, int>* arr = new std::pair<int, int>[numbooks];
	
		bool flag = false;
		for(int i=0; i<numbooks; i++){
			int pages;
			int cost;
			std::cin>>pages;
			std::cin>>cost;

			if(pages >= freq && cost  <= availk){
				flag = true;
			}
		}

	//	bool flag = check(arr, numbooks, freq, availk);
		
		if(flag){
			std::cout<<"LuckyChef"<<'\n';
		} else {
			std::cout<<"UnluckyChef"<<'\n';
		}

		//std::cout<<"Page0: "<<arr[0].first<<"  Cost0: "<<arr[0].second<<'\n';

		test--;
	}
	return 0;
}
