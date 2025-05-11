class Solution {
  public:
  
    int nFibonacci(int n,vector<int> & memo){
        if(n<=1)return n;
        if(memo[n]!=-1)return memo[n];
        memo[n]= nFibonacci(n-1,memo)+nFibonacci(n-2,memo);
        return memo[n];
    }
  
    int nthFibonacci(int n) {
      vector<int>memo(n+1,-1);
      return nFibonacci(n,memo);
    }
};
