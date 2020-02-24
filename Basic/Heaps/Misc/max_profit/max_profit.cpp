//Given an array seats[] where seat[i] is the number of vacant seats in 
//the ith row in a stadium for a cricket match. There are N people in a 
//queue waiting to buy the tickets. Each seat costs equal to the number 
//of vacant seats in the row it belongs to. The task is to maximize the 
//profit by selling the tickets to N people.

#include<iostream>
#include<algorithm>
#include<vector>

int  max_profit(std::vector<int> v, int num){
	int count {0};
	
	for(int i=0; i<num; i++){
		std::make_heap(v.begin(), v.end());
		count += v.front();
		v.front()--;
	}

	return count;
}

int main(){
	std::vector<int> seat;
	std::cout<<"Enter num of people: "<<'\n';
	int num;
	std::cin>>num;

	std::cout<<"Enter num rows: "<<'\n';
	int len;
	std::cin>>len;
	
	std::cout<<"Enter empty seats in every row"<<'\n';
	for(int i=0; i<len; i++){
		int temp;
		std::cin>>temp;
		seat.push_back(temp);	
	}

	std::cout<<"MaxPossibleProfit: "<<max_profit(seat, num)<<'\n';
	return 0;
}
