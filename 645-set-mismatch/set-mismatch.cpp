class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = -1;
        int missing = -1;
        
        for(int i=0; i<n; i++){
           int x= abs(nums[i]);

           if(nums[x-1] < 0){
            dup = x;
           }else{
            nums[x-1] *= -1;
           }
    }

    for(int i=0; i<n; i++){
        if(nums[i] >0){
            missing = i+1;
            break;
        }
    }
    return {dup, missing};
    }
};