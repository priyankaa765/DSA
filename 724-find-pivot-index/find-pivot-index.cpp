class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int rSum = 0 ;

    for(int ele : nums){ // Sum of all the element 
        rSum = rSum + ele;
    }

    int LSum = 0; // left sum at 0

    for (int i = 0; i < nums.size(); i++ ){
        // subtract current element from rSum
        rSum = rSum - nums[i];

        if(rSum == LSum){
            return i ;
        }

        //Add current element in LSum
        LSum = LSum + nums[i];
    }
    return -1; //Return -1 if no pivot index exists

    }
};