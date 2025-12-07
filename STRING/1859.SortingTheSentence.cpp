//   PROBLEM : SORTING THE SENTENCE 
//   LINK : https://leetcode.com/problems/sorting-the-sentence
//   DIFFICULTY : EASY
//   APPROACH : SPLIT → PLACE IN CORRECT INDEX → JOIN 

class Solution {
public:
    string sortSentence(string s) {
    vector<string>store(10);
    string temp;
    int count = 0;
    // BUILDING VECTOR THAT CONTAIN EACH WORD ACCORDING TO INDEX-POS
    for(int i = 0;i<s.size();i++){
        if(s[i]==' '){
            int pos = temp[temp.size()-1]-'0';
            temp.pop_back();
            store[pos] = temp;
            temp.clear();
            count++;
        }else{
            temp += s[i]; 
        }
    }
    // HANDLING LAST WORD 
    int pos = temp[temp.size()-1]-'0';
            temp.pop_back();
            store[pos] = temp;
            temp.clear();
            count++;
    // ANSWER BUILDING
    string ans ;
    for(int i = 1;i<=count;i++){
        ans += store[i];
        ans += ' ';
    }
    ans.pop_back();  // LAST EXTRA BLANK SPACE REMOVE 
    return ans ;
    }
};