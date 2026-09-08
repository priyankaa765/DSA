class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> freq;

        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }

        unordered_set<int> check;
        for(auto i:freq){
            check.insert(i.second);
        }

        if(check.size() == freq.size()){
            return true;
        }else{
            return false;
        }
        
    }
};