//   PROBLEM : COUNT OPERATIONS TO OBTAIN ZERO
//   LINK : https://leetcode.com/problems/count-operations-to-obtain-zero
//   DIFFICULTY : EASY
//   APPROACH : SIMPLE IF CONDITION USAGE 

class Solution {
public:
    int countOperations(int num1, int num2) {
        if(num1==0) return 0 ;
        if(num2==0) return 0 ;
        int count= 0;
    while(num1 && num2){
        if(num1 >= num2) {
            num1 = num1 - num2 ; 
            count++;
        }else {
            num2 = num2 - num1 ;
            count++;
        }
    }
    return count;
    }
};