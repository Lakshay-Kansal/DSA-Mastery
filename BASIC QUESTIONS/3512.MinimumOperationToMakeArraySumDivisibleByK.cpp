//   PROBLEM : MINIMUM OPERATION TO MAKE ARRAY SUM DIVISIBLE BY K  
//   LINK : https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k
//   DIFFICULTY : EASY
//   APPROACH : FIND SUM THEN MODULO OF SUM IS ANSWER 

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int i =0 ;i<nums.size();i++){
            sum += nums[i];
        }
        return sum%k;
    }

};
