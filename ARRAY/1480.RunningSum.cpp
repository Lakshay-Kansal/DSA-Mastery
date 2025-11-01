//   PROBLEM : RUNNING SUM OF 1D ARRAY
//   LINK : https://leetcode.com/problems/running-sum-of-1d-array
//   DIFFICULTY : EASY
//   APPROACH : nums[0] REMAIN SAME AND nums[i] = nums[i]+nums[i-1]

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i<nums.size() ; i++ ){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};