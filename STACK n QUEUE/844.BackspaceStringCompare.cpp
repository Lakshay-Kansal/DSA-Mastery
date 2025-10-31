//   PROBLEM : BACKSPACE STRING COMPARE
//   LINK : https://leetcode.com/problems/backspace-string-compare
//   DIFFICULTY : EASY
//   APPROACH : USE TWO-STACK (REMOVE ALL BACKSPACES) THEN COMPARE 

class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char>ss;   // for string:s
    for(int i =0 ;i<s.size();i++){
        if(s[i]=='#'){ 
            if(ss.empty()) continue; 
            else ss.pop();
        }else{  
            ss.push(s[i]);
        }
    }
    stack<char>tt;   // for string:t
    for(int i =0 ;i<t.size();i++){
        if(t[i]=='#') {  
            if(tt.empty()) continue; 
            else tt.pop();
        }
        else tt.push(t[i]);
    }   
    // COMPARING/CHECKING BOTH STRING 
    if(ss.size()==0 && tt.size()==0) return true;
    if(ss.size()!=tt.size()) return false;
    while(!ss.empty()){
        if(ss.top()!=tt.top()) return false;
        ss.pop();
        tt.pop();
    }
    return true;
    }
};