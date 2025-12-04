//   PROBLEM : BFS OF GRAPH  
//   LINK : https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
//   DIFFICULTY : MEDIUM
//   APPROACH : BREADTH FIRST SEARCH 

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int>ans;
        queue<int>q;
        vector<int>visited(adj.size(),0);
        q.push(0);
        visited[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int i = 0;i<adj[node].size();i++){
                if(!visited[adj[node][i]]){
                    visited[adj[node][i]] = 1;
                    q.push(adj[node][i]);
                }
            }
        }
        return ans;
    }
};