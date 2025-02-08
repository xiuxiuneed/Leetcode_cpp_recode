#include <iostream>
#include <vector>

class Solution{
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        std::vector<int> result(nums.size(),0);
        int first_index = 0;
        int last_index = nums.size() - 1;
        for(int i = nums.size() - 1; i >= 0;i--){
            if(nums[first_index]*nums[first_index] >= nums[last_index]*nums[last_index]){
                result[i] = nums[first_index]*nums[first_index];
                first_index ++;
            }
            else{
                result[i] = nums[last_index]*nums[last_index];
                last_index --;
            }
        }
        return result;
};
};

int main() {
    std::vector<int> nums = {-4,-1,0,3,10};
    Solution solution;
    
    for(int i = 0; i < nums.size();i ++){
        std::cout<<solution.sortedSquares(nums)[i]<<std::endl;
    }

    return 0;    
}