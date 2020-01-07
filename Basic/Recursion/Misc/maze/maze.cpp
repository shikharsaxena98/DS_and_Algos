#include<iostream>

int startr {};
int startc {};

void findS(char maze[8][8]){
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(maze[i][j]=='S'){
				startr = i;
				startc = j;
			}
		}
	}
}

bool ispathpossible(char maze[8][8], int startr, int startc){
	if(maze[startr][startc]=='*') return false;

	if(maze[startr][startc]=='E') return true;

	if(maze[startr][startc] == ' ') maze[startr][startc] = '*';

	if(ispathpossible(maze, startr, startc - 1)) return true;
	if(ispathpossible(maze, startr, startc + 1)) return true;
	if(ispathpossible(maze,  startr -1, startc)) return true;
	if(ispathpossible(maze, startr + 1, startc)) return true;

}

int  main(){
	char maze[][8] = {{'*', '*', '*', '*', '*', ' ', ' ', ' '},
			 {'*', ' ', ' ', ' ', '*', ' ', ' ', ' '},
			 {'*', 'S', '*', '*', '*', ' ', ' ', ' '},
			 {'*', ' ', ' ', ' ', '*', '*', '*', '*'},
			 {'*', ' ', '*', ' ', ' ', ' ', ' ', '*'},
			 {'*', ' ', ' ', ' ', '*', ' ', ' ', '*'},
			 {'*', '*', '*', '*', '*', ' ', 'E', '*'},
			 {' ', ' ', ' ', ' ', '*', '*', '*', '*'}
			};
	
	findS(maze);
	bool val=ispathpossible(maze, startr, startc);
	std::cout<<val<<'\n';
	return 0;
}
