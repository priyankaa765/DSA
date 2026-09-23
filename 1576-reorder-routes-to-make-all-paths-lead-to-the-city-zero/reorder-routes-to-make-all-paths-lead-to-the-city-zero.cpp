class Solution {
public:
     void dfs(unordered_map<int, vector<pair<int, int>>> &adj, vector<bool> &visited, int city, int &count){
        visited[city] = true;
        for(auto &[next, sign]: adj[city]){
            if(!visited[next]){
                if(sign == 1){
                    count++;
                }
                dfs(adj, visited, next, count);
            }
        }
     }
    int minReorder(int n, vector<vector<int>>& connections) {
       unordered_map<int, vector<pair<int, int>>> adj;

       for(auto &conn : connections){
        int u = conn[0];
        int v = conn[1];
        adj[u].push_back({v,1});
        adj[v].push_back({u,0});
       } 
       vector<bool> visited(n, false);
       int count = 0;
       dfs(adj, visited, 0, count);

       return count;
    }
};