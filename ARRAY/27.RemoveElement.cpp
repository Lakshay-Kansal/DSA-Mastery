//   PROBLEM : REMOVE ELEMENT
//   LINK : https://leetcode.com/problems/remove-element
//   DIFFICULTY : EASY
//   APPROACH : TWO-POINTER 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int first =  0 ;
    int last = nums.size()-1 ;
    int k =0 ;
    while(first<=last){
        if(nums[first]==val){
            swap(nums[first],nums[last]);
            last--;
        }else{
            first++;
            k++;
        }
    }   
    return k;
    }
};