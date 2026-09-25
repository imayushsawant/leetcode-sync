class Solution {
public:
    int findComplement(int n) {
        int binary[32];
        int i = 0;
        int j = 0;
        int decimal = 0;
        while (n != 0) {
            int bit = n & 1;
            binary[i] = bit;
            n = n >> 1;
            i++;
        }
        while (j < i) {
            int digit = binary[j];
            if (digit == 0)
                decimal += pow(2, j);
            j++;
        }
        return decimal;
    }
};