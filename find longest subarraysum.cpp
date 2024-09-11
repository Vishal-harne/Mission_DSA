
// class Solution{
//     public:
//       int lenOfLongSubarr(int arr[],  int N, int K) 
//     { 
        
//         vector<int>ans;
//       int csum=0;
//       int large=INT_MIN;
//         int j=0;
//        for(int i=0;i<N;i++){
         
//            while(csum+arr[j]<K  && j<N){
//                csum+=arr[j];
//                j++;
//            }
//            if(csum+arr[j]==K  && j<N){
//                csum-=arr[i];
//                if(j-i+1>(large)){
//                    large=j-i+1;
//                }
//                j++;
//            }else if(csum+arr[j]>K  && j<N){
//                 csum-=arr[i];
//                j++;
//            }
//        }
//        if(large==INT_MIN){
//            return 0;
//        }
//        return large;
//     } 

// };
// //wrong answer failed in most of cases



class Solution{
    public:
     int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int,int>mp;
        int maxLen = 0;
        int sum = 0;
        for(int i = 0; i < N; i++){
            sum += A[i];
            if(sum == K){
                maxLen = max(maxLen, i+1);
            }
            if(mp.find(sum-K) != mp.end()){
                maxLen = max(maxLen, i - mp[sum-K]);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return maxLen;
    } 

};
