//   PROBLEM : COUNT DISTINCT ELEMENTS IN EVERY WINDOW 
//   TIME COMPLEXITY  : O(n)
//   SPACE COMPLEXITY : O(1)

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int i =0;
        int j =0;
        vector<int>ans;
        unordered_map<int,int>mp;
        while(j<k){
            mp[arr[j]]++;
            j++;
        }
        ans.push_back(mp.size());
        while(j<arr.size()){
            mp[arr[j]]++;
            mp[arr[i]]--;
            if(mp[arr[i]] == 0){
                mp.erase(arr[i]);
            }
            j++;
            i++;
            ans.push_back(mp.size());
        }
        return ans;
    }
};