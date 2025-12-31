//   PROBLEM : PALINDROME STRING
//   TIME COMPLEXITY  : O(n)
//   SPACE COMPLEXITY : O(1)

class Solution {
  public:
    bool isPalindrome(string& s) {
        int i = 0;
        int j = s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};