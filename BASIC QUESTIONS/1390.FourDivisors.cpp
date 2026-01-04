//   PROBLEM : FOUR DIVISORS
//   LINK : https://leetcode.com/problems/four-divisors
//   DIFFICULTY : MEDIUM
//   APPROACH : CALCULATE DIVISOR AND ADD IF 4  

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
    int ans = 0;
    for(int i =0;i<nums.size();i++){
        int sum =0;
        int count =0;
        for(int j =1;j*j<=nums[i];j++){
            if(nums[i]%j == 0){
                int k = nums[i]/j;
                if(j==k){
                    count++;
                    sum += j;
                }else{
                    count += 2;
                    sum += k + j;
                }
            }
        }
        if(count==4) ans += sum;
    }   
    return ans ;
    }
};