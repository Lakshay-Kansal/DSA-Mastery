//   PROBLEM : MAXIMUM NUMBER OF VOWELS IN A SUBSTRING OF GIVEN LENGTH 
//   LINK : https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length
//   DIFFICULTY : MEDIUM
//   APPROACH : SLIDING WINDOW 

class Solution {
public:
bool isVowel(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            return true;
        default:
            return false;
    }
}

    int maxVowels(string s, int k) {
        if(k>s.size()) return 0;
        int i =0;
        int j =0;
        int count = 0;
        while(j<k){
            if(isVowel(s[j])) count++;
            j++;
        } 
        int ans = count; 
        while(j<s.size()){
            if(isVowel(s[i]))count--;
            if(isVowel(s[j]))count++;
            j++;
            i++;
            ans = max(ans,count);
        }
        return ans;   
    }
};