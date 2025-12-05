//   PROBLEM : CHECK IF THE SENTENCE IS PANGRAM
//   LINK : https://leetcode.com/problems/check-if-the-sentence-is-pangram
//   DIFFICULTY : EASY
//   APPROACH : BUILD ARRAY FOR ALPHABETS IF ANY INDEX REMAIN 0 MEANS ALPHABET NOT PRESENT 

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
       vector<int>check(26,0);
       for(int i = 0;i<sentence.length();i++){
        int index = sentence[i] - 'a' ;            // USING ASCII VALUE SUBTRACTION
        check[index] = 1;
       } 
       for(int j =0;j<26;j++){
        if(check[j] == 0) return false;
       }
       return true;
    }
};