class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>> mp; //row+col ,elements

        for(int row = nums.size()-1; row >= 0; row--){
            for(int col = 0; col < nums[row].size(); col++){

                int diag = row+col;

                mp[diag].push_back(nums[row][col]);
            }
        }

        vector<int> result;
        int daigonal = 0;

        while(mp.find(daigonal) != mp.end()){

            for(int &num : mp[daigonal]){
                result.push_back(num);
            }
            daigonal++;
        }    
        return result;    
    }
};