//   PROBLEM : DFS OF GRAPH  
//   LINK : https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
//   DIFFICULTY : MEDIUM
//   APPROACH : DEPTH FIRST SEARCH 

class Solution {
  public:
  void dfs(int node,vector<vector<int>>&adj,vector<int>&visited , vector<int>&ans){
    visited[node]=1;
    ans.push_back(node);
    for(int i  = 0;i<adj[node].size() ;i++){
        if(!visited[adj[node][i]]){
            dfs(adj[node][i],adj,visited,ans);
        }
    }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int>ans;
        vector<int>visited(adj.size(),0);
        dfs(0,adj,visited,ans);
        return ans;
    }
};