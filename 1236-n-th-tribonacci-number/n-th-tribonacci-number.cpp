class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        } else {
            int fir = 0;
            int sec = 1;
            int thir = 1;
            int forth = 0;

            for(int i = 3;i <=n ; i++){

                forth = fir + sec + thir  ;

                fir = sec;
                sec = thir;
                thir = forth;
            }
            return forth;
        }
        
    }
};