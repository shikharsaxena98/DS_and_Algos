#include<iostream>
#include<algorithm>
int main() {
	int len;
	std::cin>>len;
	int* arr = new int[len];

	for(int i=0; i<len;i++){
		std::cin>>arr[i];	
	}
    
    int target;
    std::cin>>target;
    
	std::sort(arr, arr+len);
	int temp =0;
	int* ptr1;
	int* ptr2;
	for(int i=0; i<len-2; i++){
	   
	   ptr1 = arr+1+i;
	   ptr2 = arr+len-1;
	   while(*ptr1 < *ptr2){
	       temp = arr[i];
	       temp += (*ptr1 + *ptr2);
	       
	       //std::cout<<temp<<'\n';
	       if(temp == target){
	           std::cout<< arr[i]<<", "<<*ptr1<<" and "<<*ptr2<<'\n';
	           ptr2--;
	           ptr1++;
	       } else if (temp > target){
	           ptr2--;
	       } else if(temp <target){
	           ptr1++;
	       }
	   }
	    
	}

	return 0;
}
