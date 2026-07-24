class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        //extact word(string stream automacially handel the multiple spaces)
        while(ss >> word){
            words.push_back(word);
        }

        //Reverse the order pf the word
        reverse(words.begin(), words.end());

        // join word with single space
        string result = "";

        for ( int i = 0 ;i < words.size(); i++){
            result = result + words[i];

            if(i < words.size()-1){
                result = result + " " ; //add space b/w words
            }
        }
        return result;
        
    }
};