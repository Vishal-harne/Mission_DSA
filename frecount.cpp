//this questio ned revision to get more clarity and get to know how to use it to write

class Solution {
public:
    void frequencyCount(vector<int>& arr, int N, int P) {
        unordered_map<int,int>freq;
        for(int i=0;i<N;i++){
            if(arr[i] <=N){
                freq[arr[i]]++;
            }
            
        }
        for(int i=0;i<N;i++){
            arr[i] = freq[i+1];
        }}
};
