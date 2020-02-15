#include<iostream>
#include<queue>

// 1. pop
// 2. push
// 3. empty
// 4. front

int main(){
	std::queue<int> q;
	for(int i=0; i<=10; i++){
		q.push(i);
	}

	while(!q.empty()){
		std::cout<<q.front()<<" ";
		q.pop();
	}

	return 0;
}
