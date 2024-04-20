class Solution {
public:
    int mySqrt(int x) {
        long int count;
        if (x<2) return x;
        for (long int i = 2; i <= x; i++) {
            if (i * i > x) {
                count = i;
                break;
            }
        }
        return --count;
    }
};