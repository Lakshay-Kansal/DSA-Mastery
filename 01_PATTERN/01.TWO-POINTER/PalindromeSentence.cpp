//   PROBLEM : PALINDROME SENTENCE
//   TIME COMPLEXITY  : O(n)
//   SPACE COMPLEXITY : O(1)

class Solution {
  public:
    bool isPalinSent(string &s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            while(i<j){
            if(!isalnum(s[i]))i++;
            else break;
            }
            while(j>i){
            if(!isalnum(s[j]))j--;
            else break;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};