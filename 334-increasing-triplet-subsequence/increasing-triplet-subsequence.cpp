class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int fir = INT_MAX;
      int sec = INT_MAX;
      int thir = INT_MAX;

      for(int i = 0 ; i < nums.size() ; i++){
        int ele = nums[i];
        if(fir >= ele){
            fir = ele;            
        }else if(sec >= ele){
            sec = ele ;
        }else{
            thir = ele ;
            return true ;
        }
      }
      return false;  
    }
};