class Solution {
public:
    int mazepath(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i == n-1 and j == m-1)return 1;
        else if(i >= n || j >= m) return 0;

        else if(dp[i][j] != -1)return dp[i][j];

        return dp[i][j] = mazepath(i, j+1,m,n,dp)+ mazepath(i+1, j,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return mazepath(0,0,m,n,dp);

        
    }
};