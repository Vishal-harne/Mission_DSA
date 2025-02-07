class Solution {
  public:
    int evenlyDivides(int n) {
        int num=n;
        int total=0;
        while(n>0){
            int digit=n%10;
              if(digit!=0  &&  num%digit==0  ){
                  total++;
              }
          n=n/10;
        }
      return total;
    }
};
