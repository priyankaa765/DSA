class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> numSet(nums.begin() , nums.end());
       int maxLen = 0 ;

       for(int num : numSet){
        // only start counting if 'num' is the begging of the squence
        if(!numSet.count(num-1)){
            int currentNum = num ;
            int currentStreak = 1;

            while(numSet.count(currentNum + 1)){
                currentNum++;
                currentStreak++;
            }

            maxLen = max(maxLen,currentStreak);
        }
       }
       return maxLen;
                
    }
};