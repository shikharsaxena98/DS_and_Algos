// Count the ways in whch a number can be expressed as a sum of consecutive numbers

#include<iostream>
#include<queue>

int get_count(int num){
	int count {0};
	int sum {0};
	std::queue<int> q;
	for(int i=0; i<num; i++){
		sum += i;
		if(sum < num){
			q.push(i);	
		} 
		
		while(sum> num && !q.empty()){

			sum -= q.front();
			if(!q.empty()){
				q.pop();
			}
		}
	       
		if(sum == num){
			count++;
		}
		std::cout<<"i\tsum\tcount"<<'\n';
		std::cout<<i<<'\t'<<sum<<'\t'<<count<<'\n'<<'\n';
	}
	return count;
}

int main(){
	int val;
	std::cin>>val;
	
	std::cout<<get_count(val)<<'\n';
	return 0;
}
