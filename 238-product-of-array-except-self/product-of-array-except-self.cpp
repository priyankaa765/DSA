class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> right (n);        

        int pro = 1;

        for(int i = n-1 ; i>=0 ; i-- ){
            pro = pro * nums[i];
            right[i] = pro;
        }
        vector<int> ans(n);

        int left = 1 ;

        for(int i = 0; i<n-1 ; i++){
            int val = left * right[i+1];
            ans[i] = val;
            left =left * nums[i];
        }
        ans[n-1] = left;

        return ans;
    }
};