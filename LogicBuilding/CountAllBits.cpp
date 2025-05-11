
class Solution {
  public:
    int setBits(int n) {
        int cnt=0;
        while(n>0){
            int R=n%2;
            if(R==1){
                cnt++;
            }
            n=n/2;
        }
        return cnt;
    }
};
