class Solution {
public:
    int reverser(int x) {
        long long quotient, remainder, reversedNum = 0;
        do {
            remainder = x % 10;
            reversedNum = (reversedNum * 10) + remainder;
            quotient = x / 10;
            x = quotient;
        } while (quotient != 0);

        return reversedNum;
    }
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else if (reverser(x) == x) {
            return true;
        }
        return false;
    }
};