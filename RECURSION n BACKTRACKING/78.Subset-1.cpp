//   PROBLEM : SUBSETS
//   LINK : https://leetcode.com/problems/subsets
//   DIFFICULTY : EASY
//   APPROACH : EVERY ELEMENT HAVE CHOICE IF THE ELEMENT INCLUDE OR NOT INCLUDE IN SUBSET

class Solution {
public:
void allsub(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>>&super){
    if(i==nums.size()){
        super.push_back({ans});
        return;
    }
    // include 
    ans.push_back(nums[i]);
    allsub(nums,ans,i+1,super);
    // exlcude
    ans.pop_back();
    allsub(nums,ans,i+1,super);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        int i =0 ;
        vector<int>ans;
        vector<vector<int>>super;
        allsub(nums,ans,i,super);
        return super;
    }
};