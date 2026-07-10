class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
     int maxSum = nums[0];
     int curmax = nums[0];

     for(int i = 1 ; i < nums.size() ; i++){

        if(nums[i-1] < nums[i]){
            curmax = curmax + nums[i];            
        }else {
            maxSum = max(maxSum , curmax);
            curmax = nums[i];
        }
    }
    maxSum = max(maxSum , curmax);

    return maxSum;   
    }
};