
class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string str=" ";
        while(n>0){
            int R=n%2;
            str.append(to_string(R));
            n=n/2;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
