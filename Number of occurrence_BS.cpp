
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   int i=0;
	   int j=n-1;
	   int left=-1;
	   int right=-1;
	   if(arr[0]>x  || arr[n-1]<x)return 0;
	   while(i<=j){
	       int mid=(i+j)/2;
	       if(arr[mid]==x){
	           left=mid;
	           right=mid;
	           while(left>0 && arr[left]==arr[left-1]){
	               left--;
	           }
	           while(right<n-1 && arr[right]==arr[right+1]){
	               right++;
	           }
	           return right-left+1;
	       }else if(arr[mid]<x){
	           i=mid+1;
	       }else{
	           j=mid-1;
	       }
	   }
	   return right-left;
	}
};
