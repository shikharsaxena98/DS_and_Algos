#include<iostream>

int finds(int* arr, int num, int target){
	int s = 0;
	int h = num; 
	int sidx {-1};
	while(s<=h){
		int m = (h+s)/2;
		if(arr[m] == target){
			sidx = m;
			h = m -1;	
		} else if(arr[m] > target){
			h = m-1;
		} else {
			s = m+1;
		}
	}
	return sidx;	
}

int finde(int* arr, int num, int sidx, int target){
        int s = sidx;
        int h = num;
        int eidx {-1};
        while(s<=h){
                int m = (h+s)/2;
                if(arr[m] == target){
                        eidx = m;
                        s = m +1;
                } else if(arr[m] > target){
                        h = m-1;
                } else {
			s = m+1;
		}
        }
        return eidx;
}


int main(){
	int num;
	std::cin>>num;

	int* arr = new int[num];

	for(int i=0; i<num; i++){
		std::cin>>arr[i];
	}



	int target;
	std::cin>>target;

	int sidx = finds(arr, num, target);
	int eidx = finde(arr, num, sidx, target);
	std::cout<<sidx<<" "<<eidx<<'\n';
	return 0;
}
