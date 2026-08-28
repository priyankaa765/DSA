class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string finalist = "";

        int i = 0;
        int j = 0;

        while (i < word1.size() && j < word2.size()) {
            finalist.push_back(word1[i]);
            i++;
            finalist.push_back(word2[j]);
            j++;
        }

        while (i < word1.size()) {
            finalist.push_back(word1[i]);
            i++;
        }
        while (j < word2.size()) {
            finalist.push_back(word2[j]);
            j++;
        }

        return finalist;
    }
};