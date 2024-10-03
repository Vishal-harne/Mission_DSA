
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        if(n==1)return 1;
        long long i=0;
        long long j=n-1;
        while(i<=j){
            long long mid=(i+j)/2;
           
            if((mid*mid)==n){
                return mid;
            }
            else if((mid*mid)<=n  && ((mid+1)*(mid+1))>n){
                return mid;
            }
            else if((mid*mid)>n){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
          return 0;
    }
  
};
