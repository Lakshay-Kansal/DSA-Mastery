//   PROBLEM : FIND MAJORITY ELMENT IN AN GIVEN ARRAY
//   LINK : https://leetcode.com/problems/majority-element
//   APPROACH : MOORE'S VOTING ALGORITHM
//    ---- if an element exist more than half of array it will not cancel 
//   by other elements . it is the dominating element in array . 
//   DIFFICULTY : MEDIUM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;
        for(int i =0 ; i < nums.size();i++){
            if(freq==0){
                ans = nums[i];
            }if(ans==nums[i]){
                freq++;
                }else{
                freq-- ;
            }
          } return ans ;
    } 
};