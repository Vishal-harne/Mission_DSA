class Solution {
  public:
    int sumOfDigits(int n) {
        int sum=0;
        int digit=0;
      while(n>0){
         digit=n%10;
         sum+=digit;
         n=n/10;
      }
      return sum;
    }
};
