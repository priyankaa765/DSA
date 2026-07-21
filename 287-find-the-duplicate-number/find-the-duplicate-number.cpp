class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int ans = 0 ;

        for(int i = 0 ; i < nums.size(); i++){
            int ele = nums[i];
            ele = abs(ele);

            if(nums[ele] > 0){
                nums[ele] = -nums[ele];
            }else{
                ans = ele ;
            }
        }
        for(int i = 0 ;i < nums.size() ; i++){
            nums[i] = abs(nums[i]);
        }

        return ans;
        
    }
};