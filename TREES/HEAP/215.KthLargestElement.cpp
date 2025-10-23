//   PROBLEM : kTH LARGEST ELEMENT IN THE ARRAY
//   LINK : https://leetcode.com/problems/kth-largest-element-in-an-array
//   DIFFICULTY : MEDIUM
//   APPROACH : PRIORITY-QUEUE 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(int i = 0; i<nums.size();i++){
            p.push(nums[i]);
        }
        while(!p.empty()){
            if(k==1) return p.top();
            p.pop();
            k--;
        }
        return 0 ;
    }
};