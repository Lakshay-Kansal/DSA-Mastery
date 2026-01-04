//   PROBLEM : MAX SUM SUBARRAY OF SIZE K
//   TIME COMPLEXITY  : O(n)
//   SPACE COMPLEXITY : O(1)

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum = 0;
        int i =0; 
        int j =0;
        int ans = INT_MIN;
        while(i<k){
            sum = sum + arr[i];
            i++;
        }
        ans = max(ans,sum); 
        while(i<arr.size()){
            sum = sum + arr[i];
            sum = sum - arr[j];
            ans = max(ans,sum);
            i++;
            j++;
        }
        return ans;
    }
};