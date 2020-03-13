#include <bits/stdc++.h>

int stepPerms(int n){

        if(n == 0){
                return 1;
        }

        int num1=0;
        int num2=0;
        int num3=0;
        if(n-1 >= 0){
                num1 = stepPerms(n-1);
 
        }
        if(n-2 >= 0){
                num2 = stepPerms(n-2);
 
        }
        if(n-3 >=0){
                num3 = stepPerms(n-3);
        }

        return num1+num2+num3;
}


int main(){
	int n;
	std::cin>>n;

	std::cout<<stepPerms(n)<<'\n';
	return 0;
}
