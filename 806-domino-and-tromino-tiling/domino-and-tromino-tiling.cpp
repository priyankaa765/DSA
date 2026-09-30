class Solution {
public:
    int numTilings(int n) {
        int mod = 1e9+7;

        vector<long long> helper;

        helper.push_back(0);
        helper.push_back(1);
        helper.push_back(2);
        helper.push_back(5);

        if(n<=3) return helper[n];

        for(int i = 4; i<=n; i++)
        {
            helper.push_back(2*helper[i-1]+helper[i-3]);
            helper[i] %= mod;
        }        
        return helper[n];
    }
};