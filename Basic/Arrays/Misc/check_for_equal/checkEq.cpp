#include<iostream>
#include<algorithm>

bool checkEq(int* arr1, int* arr2, int n, int m){
	if(n!= m){
		return false;
	}

	std::sort(arr1, arr1+n);
	std::sort(arr2, arr2+n);

	for(int i=0; i<n; i++){
		//std::cout<<arr1[i]<<" "<<arr2[i]<<'\n';
		if(arr1[i] != arr2[i])
			return false;
	}

	return true;

}

int main(){

	int arr1[] = {3, 5, 2, 5 ,2};
	int arr2[] = {2, 3, 5, 5, 2};
	
	checkEq(arr1, arr2, 5,5) ? std::cout<<"Equal\n": std::cout<<"Not Equal\n";


	return 0;
}
