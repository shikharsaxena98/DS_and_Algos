#include <iostream>
int countCar(int *arr, int len){
    int min = arr[0];
    int count =1;
    
    for(int i=0; i<len; i++){
	       std::cout<<arr[i];
	}
	   
    
    for(int i=1; i<len; i++){
        std::cout<<min<<" "<<arr[i]<<'\n';
        if(arr[i] <= min){
            //std::cout<<arr[i]<<" ";
            count++;
            min = arr[i];
        }
    }
    return count;
    
}

int main() {
	// your code goes here
	int test;
	std::cin>>test;
	
	while(test){
	   int num;
	   std::cin>>num;
	   int* arr = new int[num];
	 // std::cout<<test<<" "<<num<<" "<<i<<'\n';  
	   for(int i=0; i<num; i++){
	       std::cin>>arr[i];
	   	std::cout<<test<<" "<<num<<" "<<i<<'\n';
	   }
	   std::cout<<"HI\n";
	   std::cout<<countCar(arr, num)<<'\n';
	   
	   test--;
	}
	return 0;
}


