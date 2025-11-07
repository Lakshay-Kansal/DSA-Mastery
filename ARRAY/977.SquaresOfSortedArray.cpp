//   PROBLEM : SQUARES OF A SORTED ARRAY
//   LINK : https://leetcode.com/problems/squares-of-a-sorted-array
//   DIFFICULTY : EASY
//   APPROACH : TWO-POINTER 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        vector<int>ans;
        while(left <= right){
            if(abs(nums[left])>abs(nums[right])){
                ans.push_back(nums[left]*nums[left]);
                left++;
            }else{
                ans.push_back(nums[right]*nums[right]);
                right--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//APPROACH 2 : WITHOUT REVERSEING THE ANS 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int left = 0;
        int right = nums.size() - 1;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (abs(nums[left]) > abs(nums[right])) {
                res[i] = nums[left] * nums[left];
                left++;
            } else {
                res[i] = nums[right] * nums[right];
                right--;
            }
        }
        return res;        
    }
};