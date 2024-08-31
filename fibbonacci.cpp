class Solution {
public:
 int fibbonacci(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fibbonacci(n-1)+fibbonacci(n-2);
 }
    int fib(int n) {
        return fibbonacci(n);
    }
};
