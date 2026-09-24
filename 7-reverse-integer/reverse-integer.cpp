class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        for (int i = x; i != 0; i /= 10) {
            int digit = i % 10;
            if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
                return 0;
            revNum = revNum * 10 + digit;

        }
        return revNum;
    }
};