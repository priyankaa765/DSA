class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int help = nums[0];
        for(int i = 1; i<nums.size(); i++){
            help = help^nums[i];
        }
        return help;
        
    }
};