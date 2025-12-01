//   PROBLEM : LARGEST ODD NUMBER IN STRING
//   LINK : https://leetcode.com/problems/largest-odd-number-in-string
//   DIFFICULTY : EASY
//   APPROACH : CHECK FROM BACK ODD NUMBER FOUND RETURN ANSWER 

class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
         if(num[i]%2 != 0){
             return num;   
            }
        while(i >= 0){
           if(num[i]%2 == 0){
            num.pop_back();
           } else {
            return num;
           }
           i--;
        }
        return num;
    }
};