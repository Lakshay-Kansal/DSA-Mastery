//   PROBLEM : EVALUATE REVERSE POLISH NOTATION
//   LINK : https://leetcode.com/problems/evaluate-reverse-polish-notation
//   DIFFICULTY : MEDIUM
//   APPROACH : STACK 

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i = 0;i<tokens.size();i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/" ){
                st.push(stoi(tokens[i]));
            }else{
             if(tokens[i] == "+"){
                int top = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                st.push(top2+top);
             }else if(tokens[i] == "-"){
                int top = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                st.push(top2-top);
             }else if(tokens[i] == "*"){
                int top = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                st.push(top2*top);
             }else if(tokens[i] == "/"){
                int top = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                st.push(top2/top);
             }
            }
        }
        return st.top();
    }
};