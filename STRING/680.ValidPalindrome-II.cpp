//   PROBLEM : VALID PALINDROME - II
//   LINK : https://leetcode.com/problems/valid-palindrome-ii
//   DIFFICULTY : EASY
//   APPROACH : ON A MISMATCH, SKIP ONE CHARACTER (LEFT OR RIGHT) AND CHECK IF THE REST IS A PALINDROME 

class Solution {
public:
bool palindrome(string s , int i , int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return palindrome(s,i+1,j) || palindrome(s,i,j-1);
            }
        }
        return true;
    }
};