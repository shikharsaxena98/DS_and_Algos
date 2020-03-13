#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

std::vector<int> primesum(int A) {
    int* prime = new int[A+1];
    for(int i=0; i<=A; i++){
        prime[i] = 1;
    }
    prime[0] =1;
    prime[1] = 1;
    
    std::vector<int> temp;
    for(int i=2; i<=A; i++){
        if(prime[i] == 1){
            for(int j=2; j*i<= A; j++){
                prime[i*j] = 0;
            }
            temp.push_back(i);
        }
    }
    
    int i=0;
    int j= temp.size() - 1;
    std::vector<int> v;
    while(i<=j){
        int sum = temp[i] + temp[j];
        if(sum < A){
          i++;
        } else if(sum > A){
            j--;
        } else {
            v.push_back(temp[i]);
	    v.push_back(temp[j]);
            return v;
        }
    }
    
}


int main(){
        int num;
        std::cin>>num;

        std::vector<int> v =primesum(num);

        std::cout<<v[0]<<" "<<v[1]<<'\n';
        return 0;
}


