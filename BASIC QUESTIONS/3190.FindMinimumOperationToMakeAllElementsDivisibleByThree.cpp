//   PROBLEM : FIND MINIMUM OPERATIONS TO MAKE ALL ELEMENTS DIVISIBLE BY THREE
//   LINK : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three
//   DIFFICULTY : EASY
//   APPROACH : SIMPLE MATH 

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int k = 0 ;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%3!=0){
                k++;
            }
        }
        return k ;
    }
};