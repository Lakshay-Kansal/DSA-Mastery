//   PROBLEM : JUST ONE MISMATCH 
//   LINK : https://www.geeksforgeeks.org/problems/just-one-mismatch1714/1
//   DIFFICULTY : EASY
//   APPROACH : TWO-LOOPS 

class Solution {
  public:
    string isStringExist(vector<string> arr, int N, string S) {
        // code here
        for(int i = 0;i<N;i++){
            if(arr[i].size() != S.size())continue;
            else{
                int ans = 0;
                for(int j = 0 ;j<S.size();j++){
                    if(S[j] != arr[i][j]){
                        ans++;
                    }
                }
                if(ans==1) return "True" ;
            }
        }
        return "False" ;
    }
};