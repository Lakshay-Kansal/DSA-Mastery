//   PROBLEM : LARGEST RECTANGLE IN HISTOGRAM
//   LINK : https://leetcode.com/problems/largest-rectangle-in-histogram
//   APPROACH : CALCULATE LARGREST RECTANGLE FOR EACH HEIGHT 
//   DIFFICULTY : HARD 


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int n = heights.size();
        // rigth smaller value
        vector<int>r(n, 0);
        for(int i = heights.size()-1 ; i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            r[i] = s.empty() ? n : s.top();
            
            s.push(i);
        }
        // re-using the same stack 
        while(!s.empty()){
            s.pop();
        }
        // left smalller value 
        vector<int>l(n, 0);
        for(int i = 0; i<heights.size();i++){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
             l[i]=s.empty() ?-1 : s.top();
            s.push(i);
        }
        int ans =0;
        int area =0;
        for(int j =0 ; j<heights.size(); j++){
            int width = r[j]-l[j]-1
            area = heights[j]*width;
            ans = max(ans,area);
        }
        return ans;
    }
};