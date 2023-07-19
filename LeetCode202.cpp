class Solution {
public:
    bool isHappy(int n) {
        while(n > 9) {
            int sum = 0;
            while(n > 0) {
                int a = n % 10;
                sum += a * a;
                n /= 10;
            }
            n = sum;
        }
        if(n == 1  || n == 7 ){
            return true;
        }
        return false;
    }
};