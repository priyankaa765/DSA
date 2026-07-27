class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> hm;

        //count character frequencies in s
        for(int i = 0 ; i < s.size(); i++){
            char ch = s[i];

            if(hm.count(ch) > 0){
                hm[ch] = hm[ch] + 1;
            }else{
                hm[ch] = 1;
            }
        }

         // decrement charater frequecies for t
        for(int i = 0 ; i < t.size(); i++){
            char ch = t[i];

            if(hm.count(ch) > 0){
                if( hm[ch] ==  1 ){
                    hm.erase(ch);
                }else{
                    hm[ch] = hm[ch] - 1;
                }
            }else{
                return false;
            }          
        }

        // if map is empty, all character count  matched
        return hm.empty();     
    }
};