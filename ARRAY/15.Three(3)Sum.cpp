//   PROBLEM : 3-SUM
//   LINK : https://leetcode.com/problems/3sum
//   APPROACH : BRUTE -> BETTER -> OPTIMAL 
//   DIFFICULTY : MEDIUM


// BRUTE APPROACH : 3-NESTED LOOPS CHECK ALL (TRIPLETS == 0) FOR UNIQUE SORT THEM AND INSERT IN HASHSET
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>unique;
        for(int i =0 ;i<n;i++){
            for(int j = i+1 ;j<n ; j++){
                for(int k = j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                vector<int>temp={nums[i],nums[j],nums[k]};
                sort(temp.begin(),temp.end());
                unique.insert(temp);
                    }
                }
            }
        }
        // FORMING ANSWER 
    vector<vector<int>>ans(unique.begin(),unique.end());
    return ans;
    }
};

// OPTIMAL APPROACH : 2-NESTED LOOPS int k =-(nums[i]+nums[j]) FIND THIRD ELEMENT USING THIS
//                    CREATE ANOTHER SET STORING VALUES BETWEEN I--->J TRAVERSE SET TO GET VALUE 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>unique;
        for(int i =0 ;i<n;i++){
        set<int>element;
            for(int j = i+1 ;j<n ; j++){
            int k =-(nums[i]+nums[j]);
            if(element.find(k) != element.end()){
                vector<int>temp = {nums[i],nums[j],k};
                sort(temp.begin(),temp.end());
                unique.insert(temp);
            }
            element.insert(nums[j]);
            }
        }
    vector<vector<int>>ans(unique.begin(),unique.end());
    return ans;
    }
};

// OPTIMAL APPROACH : SORT ARRAY AND USE TWO-POINTER   i j->     <-k
//                                                    [1,2,,5,3,6,3]
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue ;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int  sum = nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                } else if(sum>0){
                    k--;
                } else{
                    vector<int>temp ={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        } return ans;
    }
};