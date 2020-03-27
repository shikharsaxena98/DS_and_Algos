#include<iostream>
#include<unordered_map>
#include<queue>
int main(){
	std::unordered_map<char, int> um;
	std::queue<char> q;
	char c;
	std::cin>>c;

	while(c!= '.'){
		q.push(c);
		um[c]++;
	
		while(!q.empty()){
			if(um[q.front()] > 1) q.pop();
			else {std::cout<<q.front()<<" ";
				break;
			}
		}

		if(q.empty()){
			std::cout<<-1<<" ";
		}

		std::cin>>c;
	}
	return 0;
}

