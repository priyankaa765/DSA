class Solution {
public:
    int maxPower(string s) {
        int Max = 1 ;
        int count = 1 ;

        for(int i = 1; i < s.size(); i++){
            char curr = s[i];
            char pre = s[i-1];

            if (curr == pre){
                count++;
            }else{
                Max = max(Max,count);
                count = 1 ; 
            }
        }
        Max = max(Max , count);

        return Max;
        
    }
};