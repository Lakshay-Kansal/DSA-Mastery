//   PROBLEM : FIND THE SMALLEST DIVISOR GIVEN A THRESHOLD
//   LINK : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold
//   APPROACH : BINARY SERACH ON ANSWER ARRAY(POSSIBLE-ANSWER)
//   DIFFICULTY : MEDIUM

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1 , end = 0 , mid, ans , n = nums.size();
        long long sum = 0 ;
        for(int i = 0 ; i<n ; i++){
        //   sum += nums[i];
          end = max(end,nums[i]);
        }
        // minimmum value = total sum of array / given time gives least speed required 
        // start = sum/h ; 
        // we can start from  1 also 
        while(start<=end){
            mid = start + (end - start)/2;
            // calculating time for each mid 
            int totalTIME = 0 ;
            for(int i =0 ;i<n ; i++){
                totalTIME +=nums[i]/mid;
                // if ans is 3.898675(soemthing) increase it by 1 (take-4)
                if(nums[i]%mid){
                    totalTIME++ ;
                }
            }
            if(totalTIME > threshold){
                start = mid + 1;
            }
            else {
                ans = mid ;
                end = mid - 1;
            }
        } 
        return ans ;
    }
};