//   PROBLEM : TWO SUM - 2 INPUT ARRAY IS SORTED
//   LINK : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted
//   DIFFICULTY : MEDIUM
//   APPROACH : TWO-POINTER 

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int first = 0;
       int last = numbers.size()-1;
       vector<int>ans;
       while(first < last){
        int sum = numbers[first] + numbers[last];
        if(target > sum){
            first++;
        }else if(target < sum){
            last--;
        }else{
        ans.push_back(first+1);
        ans.push_back(last+1);  
        break; 
        }
    } 
    return ans;
    }
};