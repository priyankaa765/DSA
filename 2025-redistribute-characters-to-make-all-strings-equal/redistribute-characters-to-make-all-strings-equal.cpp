class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int fre[26] = {0} ;

        for(int i = 0; i < words.size() ; i++){
            string w = words[i];

            for(int j = 0; j < w.size(); j++){
                char ch = w[j];
                int idx = (int)(ch-'a');
                fre[idx] = fre[idx] + 1;
            }
        }
        for(int i = 0; i < 26; i++){

             if (fre[i] % words.size() != 0){
                return false ;
             }
        }
       return true ;
        
    }
};