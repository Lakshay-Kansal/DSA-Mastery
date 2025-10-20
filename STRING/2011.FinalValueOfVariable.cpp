//   PROBLEM : FINAL VALUE OF VARIABLE AFTER PERFORMING OPERATION
//   LINK : https://leetcode.com/problems/final-value-of-variable-after-performing-operations
//   DIFFICULTY : EASY
//   APPROACH : BASIC USE OF IF-ELSE CONDITION


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        if(operations.size()==0) return 0;
       int x = 0;
       for(int j = 0 ; j<operations.size();j++){
        if(operations[j]=="X++" || operations[j]=="++X"){
            x++;
        }else{
            x--;
        }
       }
       return x;
    }
};