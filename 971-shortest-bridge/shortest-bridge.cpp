class Solution {
public:
    int m ,n ;

    vector<vector<int>> directions = {
                {-1, 0},
        {0, -1},          {0, 1},
                {1, 0}
    };

    bool isSafe(int i, int j){
        return i >= 0 && i < m && j>= 0 && j < n;
    }
    void dfs(vector<vector<int>>& grid, int i, int j, set<pair<int, int>>& visitedCell){
        if(!isSafe(i,j) || grid[i][j] == 0 || visitedCell.find({i,j}) != visitedCell.end()){
            return ;
        }
        visitedCell.insert({i, j});
        for(auto &dir : directions){
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            dfs(grid, i_, j_, visitedCell);

        }
    }

    int bfs(vector<vector<int>>& grid,set<pair<int, int>>& visitedCell){
        queue<pair<int, int>> que;
        for(auto &it : visitedCell){
            que.push(it);
        }

        int level = 0;

        while(!que.empty()){

            int L = que.size();

            while(L--){
                pair<int, int> P = que.front();
                que.pop();

                int x = P.first;
                int y = P.second;

                for(auto &dir : directions){
                    int x_ = x + dir[0];
                    int y_ = y + dir[1];

                    if(isSafe(x_, y_) && visitedCell.find({x_, y_}) == visitedCell.end()){

                        if(grid[x_][y_] == 1){ // we found 2nd island
                            return level;
                        }

                        visitedCell.insert({x_, y_});
                        que.push({x_, y_});
                    } 
                }
            }
            level++;
        }

        return level;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        set<pair<int, int>> visitedCell;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){

                if(grid[i][j] == 1){ // found 1st island
                    dfs(grid, i, j, visitedCell); // mark a 1 cell of 1st island and store them in visitedCell

                    return bfs(grid, visitedCell);
                }
            }
        }
        return -1;        
    }
};