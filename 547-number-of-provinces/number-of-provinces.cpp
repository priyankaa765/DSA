class Solution {
public:
    void eachProvince(unordered_map<int,vector<int>> &adj, vector<bool> &visited, int visit){
        visited[visit] = true;
        for(auto next:adj[visit]){
            if(!visited[next]) eachProvince(adj, visited, next);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>> adj;
        int n = isConnected.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j<n; j++){
                if(isConnected[i][j] and i!=j)adj[i].push_back(j);
            }
        } 
        vector<bool>visited(n,false);
        int count = 0;

        for(int i = 0; i<n; i++){
            if(!visited[i]){
                eachProvince(adj, visited, i);
                count++;
            }
        }
        return count ;

    }
};