#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left +(right - left)/2;
            if (nums[mid] > target)
                right = mid -1;
            else if (nums[mid] < target)
                left = mid + 1;
            else if (nums[mid] == target)
                return mid;
        }
        return -1;
    }
};

int main(){
    Solution solution;
    
    std::vector<int> nums = {5};
    int target1 = 5;
    int result1 = solution.search(nums, target1);
    std::cout << "Search for " << target1 << ": Index = " << result1 << std::endl;

}


