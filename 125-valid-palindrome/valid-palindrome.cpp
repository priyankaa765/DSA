class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1){
            return true ;
        }

        string sb= "";

        for(int i = 0 ; i < s.length() ; i++){
            char ch = s[i];

            if(ch >= 'a' && ch <= 'z' ){
                sb += ch;
            }else if(ch >= 'A' && ch <= 'Z'){
                sb += tolower(ch);
                
            }else if( ch >= '0' && ch <= '9' ){
                sb += ch;
            }
        }
        int start = 0 ;
        int end = sb.size()-1;

        while(start < end){

            int sChar = sb[start];
            int eChar = sb[end];

            if (sChar != eChar){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};