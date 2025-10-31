//   PROBLEM : MINIMUM ADD TO MAKE PARENTHESES VALID
//   LINK : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid
//   DIFFICULTY : MEDIUM
//   APPROACH : STACK 

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int count = 0; 
        for(int i=0 ; i<s.size() ; i++ ){
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(st.empty()) count++;
                else st.pop();
            }
        }
        return count + st.size();
    }
};