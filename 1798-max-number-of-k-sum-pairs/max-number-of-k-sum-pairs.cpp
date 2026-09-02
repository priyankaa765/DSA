class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());

        if(nums.size() < 2){
            return 0;
        }
      int start = 0 ;
      int end = nums.size()-1;
      
      int count = 0;

      while(start < end ){
        int sum = nums[start] + nums[end];

        if(sum == k){
            start++ ;
            end-- ;
            count++ ;
        }else if(sum < k){
            start++;
        }else{
            end--;
        }
      }
      return count ;
    }
};