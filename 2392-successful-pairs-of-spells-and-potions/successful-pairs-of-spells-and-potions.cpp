class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();

        vector<int> result(n);

        sort(potions.begin(), potions.end());

        for(int i = 0; i < n; i++){
            long long spell = spells[i];
            long long min_potion = (success + spell - 1)/spell;
            auto it = lower_bound(potions.begin(),potions.end(), min_potion);
            
            int count = potions.end()-it;
            result[i] = count;
              }
              return result;        
    }
};