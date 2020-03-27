#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> m;
        std::vector<int> v;
        for(int i=0; i<nums.size(); i++){
            
	int temp = target- nums[i];
            if(m.find(temp) != m.end()){
                v.push_back(m[temp]);
                v.push_back(i);
                return v;
            }
            else{
            m[nums[i]] = i;
            }
        }
}	

int main(){
	std::vector<int> v = {3,3};
	
	std::vector<int> ans= twoSum(v, 6);
	
	for(int x: ans) std::cout<<x<<" ";	
	
	std::cout<<'\n';

}
