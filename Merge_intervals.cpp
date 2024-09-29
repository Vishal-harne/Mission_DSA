class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
  
    vector<vector<int>> v;

    sort(intervals.begin(), intervals.end());

    vector<int> v1 = intervals[0];
    
    for (int i = 1; i < n; i++) {
        if (v1[1] >= intervals[i][0]) {
            v1[1] = max(v1[1], intervals[i][1]);
        }
        else {
            v.push_back(v1);
            v1 = intervals[i];
        }
    }
    
    v.push_back(v1); // Push the last merged interval
    
    return v;
}};


