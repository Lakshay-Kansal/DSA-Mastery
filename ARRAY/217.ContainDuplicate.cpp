//   PROBLEM : CONTAINS DUPLICATE
//   LINK : https://leetcode.com/problems/contains-duplicate
//   DIFFICULTY : EASY
//   APPROACH : HASHING

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i = 0 ;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
            return true;
        }
        mpp.insert({nums[i],i});
    }
    return false;
    }
};