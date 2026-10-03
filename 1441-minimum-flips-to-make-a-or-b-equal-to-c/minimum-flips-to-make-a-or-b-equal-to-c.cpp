class Solution {
public:
    int minFlips(int a, int b, int c) {

        int p,q,r,count = 0;

        for(int i=0; i<32; i++){
            p=a&(1<<i);
            q=b&(1<<i);
            r=c&(1<<i);

            if(r==0){
                if(p != 0 and q == 0)count += 1;
                else if(p == 0 and q !=0)count += 1;
                else if(p!=0 and q!=0) count += 2;
            }
            else{
                if(p==0 and q==0)count +=1;
            }
        }
        return count;
        
    }
};