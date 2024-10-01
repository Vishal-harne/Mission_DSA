




class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){
        long long start=0;
         long long end=n-1;
         if(x>arr[end])return n-1;
         while(start<=end)
         {
             long long  mid=start+(end-start)/2;
             if(arr[mid]==x)
             {
                 return mid;
             }
             if(arr[mid]<x && arr[mid+1]>x && mid+1<=arr.size()-1)
             {
                 return mid;
             }
             else if(arr[mid]<x)
             {
                 start=mid+1;
             }
             else
             {
                 end=mid-1;
             }
             
         }
         return -1;
    }
};
