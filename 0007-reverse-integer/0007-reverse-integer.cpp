class Solution {
public:
    int reverse(int x) {
        int limit = INT_MAX / 10;
        int reverse = 0;

        while (x != 0) {
            // Check for overflow
            if (reverse > limit || reverse < -limit)
                return 0;

            reverse = reverse * 10 + x % 10;
            x /= 10;
        }

        return reverse;
    }
};