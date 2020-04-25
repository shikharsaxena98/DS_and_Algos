#include<iostream>
#include <string>
#include <vector>

int getRemS(std::vector<std::string> maze, int i, int j, int n, int m, int s){
	//std::cout<<s<<" "<<maze[i][j]<<" "<<j<<'\n'; 
	if(i >= n) return s; 
	if(s <= 0) return -1;
	if(j >= 2*m-1) return  getRemS(maze, i+1, 0, n, m, s);

	if(maze[i][j] == ' ') return getRemS(maze, i, j+1, n, m, s);
	if(maze[i][j] == '.' && j == 2*) return getRemS(maze, i, j+1, n, m, s-3);

	if(maze[i][j] == '.') return getRemS(maze, i, j+1, n, m, s-3);
	if(maze[i][j] == '*') return getRemS(maze, i, j+1, n, m, s+4);
	if(maze[i][j] == '#') return getRemS(maze, i+1, 0, n, m, s);

}

int main() {
	int n, m, k, s;
	std::cin>>n>>m>>k>>s;
	std::vector<std::string> maze;
	std::string waste;
	getline(std::cin, waste);
	maze.resize(n);
	for(int i=0; i<n; i++){
		getline(std::cin, maze[i]);
	}
	
	for(int i=0; i<n; i++){
                std::cout<<maze[i];
        }


	int s_rem = getRemS(maze, 0, 0, n, m, s);
	std::cout<<s_rem<<'\n';
	if(s_rem < k) std::cout<<"NO\n";
	else std::cout<<"YES\n"<<s_rem<<'\n';

	return 0;
}
