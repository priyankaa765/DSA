class Solution {
public:
    int maximumCount(vector<int>& nums) {
        //unsing function
      int lastnegIndex = lastNegative(nums) + 1;
      int firstposIndex = nums.size() - firstPosition(nums);

      return max(lastnegIndex , firstposIndex);  
    }

        int lastNegative(vector<int>& nums){
        int start = 0 ;
        int end = nums.size()-1;
        int ans = -1;

        while(start <= end){
            int mid = (start + end)/2;

            if( nums[mid] < 0){
                ans = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }

        int firstPosition(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1 ;
        int ans = nums.size();

        while(start <= end){
            int mid = (start + end)/2;

            if(nums[mid] > 0){
                ans = mid ;
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        return ans ;
    }
};