
class Solution {
  public:
  bool checkmid(int mid,int n,int arr[], int m){
      int student=1;
      int csum=0;
      for(int i=0;i<n;i++){
          if(arr[i]>mid){
              return false;
          }
          csum+=arr[i];
          if(csum>mid){
              student++;
              csum=arr[i];
              if(student>m){
                  return false;
              }
          }
      }
      return true;
  }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        if(m>n)return -1;
     int maxi=INT_MIN;
     int sum=0;
      for(int i=0;i<n;i++){
          sum+=arr[i];
          maxi=max(maxi,arr[i]);
      }
      int i=maxi;
      int j=sum;
      int result=sum;
      while(i<=j){
          int mid=i+(j-i)/2;
          if(checkmid(mid,n,arr,m)==true){
              result=mid;
              j=mid-1;
          }else{
              i=mid+1;
          }
      }
      return result;
    }
};
