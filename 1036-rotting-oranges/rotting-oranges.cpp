class Solution {
public:
    int bfs(vector<vector<int>> &grid, int n, int m){
        queue<pair<int, int>>q;
        int count = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2)q.push({i,j});
            }
        }
        while(!q.empty()){
            int size = q.size();
            bool isSpoile = false;

            while(size--){
                int thisRow = q.front().first;
                int thisCol = q.front().second;
                q.pop();

                int x[4]= {-1,1,0,0};
                int y[4]={0,0,-1,1};

                for(int i = 0; i<4; i++){
                    int row = thisRow+x[i];
                    int col = thisCol+y[i];

                    if(row >= 0 and col >=0 and row <= n-1 and col <= m-1 and grid[row][col] == 1){
                        grid[row][col] = 2;
                        q.push({row,col});
                        isSpoile = true;
                    }
                }
            }
            if(isSpoile)count++;
        }
            return count;
        }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = bfs(grid, n, m);

        for(auto i:grid){
            for(auto j:i){
                if(j==1)return -1;
            }
        }
        return ans;
        
    }
};