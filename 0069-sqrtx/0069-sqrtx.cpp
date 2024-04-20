// less efficient and more time consuming;
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


// more better algo for the same is: 
class Solution {
public:
    long int mySqrt(int x) {
        long int start = 0;
        long int end = x;

        while (start <= end){
            long int mid = start + (end-start)/2;
            if(mid*mid == x) return mid;
            if(x < mid*mid) end = mid-1;
            if(x > mid*mid) start = mid+1;
        }
        return end;
    }
};
