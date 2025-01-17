#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int lateindex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val) continue;
            else {
                nums[lateindex] = nums[i];
                lateindex ++;
            }
        }
        return lateindex;
    }
};

int main(){
    Solution solution;

    std::vector<int> nums = {0,1,5};
    int val = 1;
    int result = solution.removeElement(nums,val);
    std::cout << "删减后的数组长度" << result << std::endl;

    for (int i = 0; i < nums.size() - 1; i++){
    std::cout << nums[i] << std::endl;
}
}