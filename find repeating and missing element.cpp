//this is one solution this will not worked for etire solution because i am assming the first map element will be missing ellement my assumption can be wrong 

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
      unordered_map<int,int>mp;
        int sum=0;
        int repeating=0;
      for(int i=0;i<n;i++){
          if(mp.find(arr[i])!=mp.end()){
              ans.push_back(arr[i]);
          }
          mp[arr[i]]=i;
            sum+=arr[i];
           
      }
      int totalsum=((n*(n+1))/2);
      totalsum=totalsum-(sum-ans[0]);
  
      ans.push_back(totalsum);
      return ans;
    }
};

//right solution is this 
class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> ans;  // To store the repeating and missing numbers
        int n = arr.size();
        unordered_map<int, int> mp;
        int sum = 0;
        int repeating = 0;
        
        // Step 1: Find the repeating element and calculate the sum
        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) != mp.end()) {
                repeating = arr[i];  // Repeating element found
            }
            mp[arr[i]] = i;
            sum += arr[i];  // Add current element to the sum
        }
        
        // Step 2: Calculate the expected sum for numbers from 1 to n
        int expectedSum = (n * (n + 1)) / 2;
        
        // Step 3: Find the missing number
        int missing = expectedSum - (sum - repeating);
        
        // Step 4: Store repeating and missing in the result vector
        ans.push_back(repeating);  // First element is the repeating one
        ans.push_back(missing);    // Second element is the missing one
        
        return ans;
    }
};
