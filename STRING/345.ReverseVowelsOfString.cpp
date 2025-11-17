//   PROBLEM : REVERSE VOWELS OF A STRING
//   LINK : https://leetcode.com/problems/reverse-vowels-of-a-string
//   DIFFICULTY : EASY
//   APPROACH : TWO-POINTER 

class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            while (start < end && !isVowel(s[start])) start++;
            while (start < end && !isVowel(s[end])) end--;

            if (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};
