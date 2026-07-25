class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0 ; 
        int read = 0 ;
        int n = chars.size();

        while ( read < n ){
            char currentChar = chars[read];
            int count = 0;
                
        //Count occurences of the current  character group
        while( read  < n && chars[read] == currentChar){
            read++;
            count++;
        }
        
        //Write tbhe character
        chars[write++] = currentChar;

        //if count > 1 write each digit of the count

        if(count > 1){
            string countStr = to_string(count);
            for(char c : countStr){
                chars[write++] = c ;
            }
        }
        }
        //REturn the new length og the compressed array 
        return write;
    }
};