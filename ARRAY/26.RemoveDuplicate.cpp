//   PROBLEM : REMOVE DUPLICATE IN-PLACE FROM GIVEN SORTED ARRAY
//   LINK : https://leetcode.com/problems/remove-duplicates-from-sorted-array
//   APPROACH : TWO-POINTER (i,j=i+1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        // nums[o] is always unique element 
        for(int j =1 ; j < nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j]; // take my front position 
                i++;
            }
    } return i+1 ;
        }
};