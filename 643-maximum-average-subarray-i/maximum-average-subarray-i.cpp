class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int currSum = 0;

     for( int i = 0; i < k ; i++){
        currSum += nums[i];
     }   

     int MaxSum = currSum;

     for(int i = k ; i < nums.size(); i++){
        currSum += nums[i] - nums[i-k];
        MaxSum = max(MaxSum, currSum);
     }

     return (double)MaxSum/k;
    }
};