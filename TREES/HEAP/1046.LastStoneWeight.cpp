//   PROBLEM : LAST STONE WEIGHT
//   LINK :  https://leetcode.com/problems/last-stone-weight
//   DIFFICULTY : EASY
//   APPROACH : PRIORITY-QUEUE 

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int>p;
       for(int i = 0; i<stones.size();i++){
        p.push(stones[i]);
       } 
       while(p.size()>1){
        int stone1 = p.top();
        p.pop();
        int stone2 = p.top();
        p.pop();
        int collide = stone1-stone2;
        if(collide != 0) p.push(collide);
       }
       if(p.empty()) return 0 ;
       return p.top();
    }
};