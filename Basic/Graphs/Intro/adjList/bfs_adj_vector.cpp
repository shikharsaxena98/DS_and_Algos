#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <queue>

template <typename T>
class graph{
        int V;
        std::unordered_map<T, std::vector<T>> um;

        public:
                void addEdge(T u, T v, bool bidir=true){
                        um[u].push_back(v);
                        if(bidir){
                                um[v].push_back(u);
                        }
                }

                void printAdj(){
                        for(auto obj: um){
                                std::cout<<obj.first<<"-->";
                                for(T val: obj.second){
                                        std::cout<<val<<", ";
                                }
                                std::cout<<'\n';
                        }
                }

		void bfs_graph(T node){
			std::queue<T> q;
			std::unordered_map<T, bool> visited;

			q.push(node);
			visited[node]= true;	
		
			while(!q.empty()){
				T temp = q.front();
				std::cout<<temp<<" ";
				q.pop();
				for(auto val: um[temp]){
					if(!visited[val]){
					q.push(val);
					visited[val] = true;
					}
				}
			}
		}
};

int main(){
        graph<std::string> g;
        g.addEdge("Modi", "Yogi");
        g.addEdge("Modi", "Trump", false);
        g.addEdge("Prabhu", "Modi", false);
        g.addEdge("Yogi", "Prabhu", false);
        g.addEdge("Putin", "Modi", false);
        g.addEdge("Putin", "Trump", false);
//      g.addEdge(5,10);

        g.printAdj();

	g.bfs_graph("Putin");
        return 0;
}

