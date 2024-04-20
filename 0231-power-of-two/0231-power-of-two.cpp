class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1)
            return true;
        int rem;
        do {
            rem = n % 2;
            if (n == 2)
                break;
            n = n / 2;
        } while (rem != 1 && n > 2);

        if (n == 2 && rem == 0) {
            return true;
        }
        return false;
    }
};