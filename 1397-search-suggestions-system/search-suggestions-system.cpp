class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        auto itr = products.begin();
        sort(itr,products.end());
        
        vector<vector<string>> result;
        string currStr ="";

        for(char ch:searchWord){
            currStr += ch;

            vector<string> suggestion;
            itr = lower_bound(itr, products.end(), currStr);

            for(int i = 0; i<3 and itr+i != products.end(); i++){
                string &s = *(itr+i);

                if(s.find(currStr)) break;

                suggestion.push_back(s);
            }
            result.push_back(suggestion);
        }
        return result;

        
    }
};