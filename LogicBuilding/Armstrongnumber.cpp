class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int p=n;
        int sum=0;
       while(n>0){
           int R=n%10;
           sum+=pow(R,3);
          
           n=n/10;
       }
       if(sum==p)return true;
       return false;
    
    }
};
