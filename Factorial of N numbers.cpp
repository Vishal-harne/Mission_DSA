
class Solution {
  public:
 
    vector<long long> factorialNumbers(long long n) {
        vector<long long>ans;
       long long result=1;
     for(int i=1;i<=n;i++){
         result*=i;
         if(result>n){
             return ans;
         }
         ans.push_back(result);
     }
     return ans;
    }
};

