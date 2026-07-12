class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    int num = 0 ;
    int tcount= 0 ; 

    for(int ele:nums){
        if(ele == target){
            tcount++ ;
        }else if(ele < target){
            num++;
        }
    }

    vector<int> ans ;

    while(tcount>0){
        ans.push_back(num);
        num++;
        tcount--;
    }

    return ans;
    }
};