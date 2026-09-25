class Solution {
public:
    bool isPowerOfTwo(int num) {
        int i=1;
        if(num<=0){
            return false;
        }
        if(num==1){
            return true;
        }
        while(i!=0){
            if(i==num) return true;
            i=i<<1;
        }
        return false;

    }
};