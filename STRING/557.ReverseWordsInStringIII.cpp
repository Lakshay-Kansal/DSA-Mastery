//   PROBLEM : REVERSE WORDS IN A STRING - III
//   LINK : https://leetcode.com/problems/reverse-words-in-a-string-iii
//   DIFFICULTY : EASY
//   APPROACH : TWO-POINTER THEN IN-PLACE REVERSING

class Solution {
public:
    string reverseWords(string s) {
       int i = 0;
       while(i<s.length()){
       int j = i;
        while(j<s.length() && s[j] != ' '){
            j++;
        }
        reverse(s.begin() + i, s.begin() + j);
        i = j+1;
       } 
       return s;  
    }
};