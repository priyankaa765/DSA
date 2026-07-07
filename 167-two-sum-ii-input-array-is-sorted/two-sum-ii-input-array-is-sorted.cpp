class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      vector<int> ans(2);

      int start = 0 ;
      int end = numbers.size()-1 ;

      while(start<end){
        int sum = numbers[start] + numbers[end];

        if(sum  == target){
            ans[0] = start+1;
            ans[1] = end+1;

            return ans;
        }else if(sum > target ){
            end--;            
        }else{
            start++;
        } 
      }   
      return ans;
    }
};