class Solution {
  public:
    int repeatedSumOfDigits(int N) {
         if(N<=9)return N;
         if(N % 9 == 0)
           return 9;
         return (N % 9);
    }
};
