class Solution {
  public:
    vector<int> AllPrimeFactors(int n) {
        set<int>s;
       while (n % 2 == 0) 
        { 
            s.insert(2);
            n = n / 2; 
        } 
        // n must be odd at this point. So we can skip 
        // one element (Note i = i + 2) 
        for (int i = 3; i <= sqrt(n); i = i + 2) 
        { 
            // While i divides n, print i and divide n 
            while (n % i == 0) 
            { 
                s.insert(i); 
                n = n / i; 
            } 
        } 

        // This condition is to handle the case when n 
        // is a prime number greater than 2 
        if (n > 2) {
           s.insert(n);
        }
        vector<int>ans(s.begin(),s.end());
        
        return ans;
}
};
