class Solution {
public:
    int fib(int n){
        int a=0;
        int b=1;
        int nextNum;
        if(n<2){
            return n;
        }
        for(int i = 2; i<=n;i++){
            nextNum=a+b;
            a=b;
            b=nextNum;
        }
        return nextNum;
    }
};