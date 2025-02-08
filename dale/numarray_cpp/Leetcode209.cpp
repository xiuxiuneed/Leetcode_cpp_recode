#include <iostream>
#include <vector>
#include <stdint.h>
using namespace std;

class Solution{
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int last_index=0 , sum=0 ,length = 0;
        int result = INT_FAST32_MAX;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while (sum >= target)
            {
                length = j -last_index +1;
                sum -= nums[last_index];
                last_index ++;
                if (length <result) result = length;
            }
        }
        return result == INT_FAST32_MAX ? 0:result;
    }
};

int  main(){
    vector<int> nums = {1,4,4};
    int target = 4;
    Solution solution;
    cout << solution.minSubArrayLen(target,nums) << endl;
    return 0;
}