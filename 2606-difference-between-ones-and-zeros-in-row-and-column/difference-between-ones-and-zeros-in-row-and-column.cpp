class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();//rows
        int n = grid[0].size();//cols

        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);

        for(int i = 0; i< m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 1){
                    rowOnes[i] += 1;
                    colOnes[j] += 1;
                }
            }
        }
        vector<vector<int>> diff(m, vector<int>(n,0));

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                int onesRowi = rowOnes[i];
                int onesColj = colOnes[j];
                int zeroRowi = n - onesRowi;
                int zerosColj = m - onesColj;

                diff[i][j] = onesRowi + onesColj - zeroRowi - zerosColj;
            }
        }
        return diff;
        
    }
};