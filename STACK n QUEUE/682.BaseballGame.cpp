//   PROBLEM : BASEBALL GAME
//   LINK : https://leetcode.com/problems/baseball-game
//   DIFFICULTY : EASY
//   APPROACH : STACK BASED APPROACH

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(int i =0 ;i<operations.size();i++){
            if(operations[i] == "+"){
                int top = s.top();
                s.pop();
                int top2 = s.top();
                s.push(top);
                s.push(top+top2);
            } else if(operations[i]=="C"){
                s.pop();
            }else if(operations[i]=="D"){
                s.push(s.top()*2);
            }else{
                s.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum +=s.top();
            s.pop();
        }
        return sum ;
    }
};