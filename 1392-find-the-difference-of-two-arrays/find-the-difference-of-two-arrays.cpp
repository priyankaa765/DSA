class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> setFirst(nums1.begin(), nums1.end());
        unordered_set<int> setTwo(nums2.begin(), nums2.end()); 

        vector<vector<int>> answer(2);

        for(int num:setFirst){
            if(setTwo.count(num) == 0){
                 answer[0].push_back(num);
            }
        }
        for(int num:setTwo){
            if(setFirst.count(num) == 0) {
                 answer[1].push_back(num);
            }
        }
        return answer;
        
    }
};