#include <iostream>
#include <map>
#include <queue>
#include <list>

class graph{
	//int v;
	std::map<int, std::list<int>> m;

	public:
	void addEdge(int u, int v, bool bidir=true){
		m[u].push_back(v);
		if(bidir){
			m[v].push_back(u);
		}
	}

	void printGraph(){
		for(auto obj: m){
			std::cout<<obj.first<<"--> ";
			for(int val : obj.second){
				std::cout<<val<<", ";
			}
			std::cout<<'\n';
		}
	}

	void getShrtDist(int src){
		std::queue<int> q;
		q.push(src);
	//	dist[val] = 0;
		std::map<int, int> dist;
		std::map<int, bool> visited;
		visited[src] = true;
		dist[src] = 0;
	
		while(!q.empty()){
			int node= q.front();
			q.pop();

			for(int data: m[node]){
				if(!visited[data]){
					dist[data] = 1+dist[node];
					visited[data] = true;
					q.push(data);
				}
			}
		}

		for(auto obj: dist){
			int node = obj.first;
			std::cout<<"distance of "<<node<<" from "<<src<<":"<<obj.second<<'\n';
		}

	}

};



int main(){

	graph g;

	g.addEdge(1,2);
	g.addEdge(2,3, false);
	g.addEdge(3,4);
	g.addEdge(4,1);
	g.addEdge(4,5, false);


	g.printGraph();

	g.getShrtDist(1);
	return 0;
}


