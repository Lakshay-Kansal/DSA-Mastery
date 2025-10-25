//   PROBLEM : MINIMUM COST OF ROPES
//   LINK :  https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
//   DIFFICULTY : MEDIUM
//   APPROACH : PRIORITY-QUEUE(MIN-HEAP)

class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<arr.size();i++){
            p.push(arr[i]);
        }
        int cost = 0;
        while(p.size()>1){
            int rope1=p.top();
            p.pop();
            rope1 += p.top();
            p.pop();
            cost +=rope1;
            p.push(rope1);
        }
        return cost;
    }
};