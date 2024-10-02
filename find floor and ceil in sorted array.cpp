pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
      pair<int,int>ans;
	  int i=0;
	  int j=n-1;
	  int floor=-1;
	  int ceil=123456;
	  if(a[0]>x)ceil=a[0];
	  if(a[n-1]<x)floor=a[n-1];
	  while(i<=j){
		  int mid=(i+j)/2;
		  if(a[mid]==x){
             ans.first=a[mid];
			 ans.second=a[mid];
			 return ans;
		  }
		  else if(a[mid]<x){
			  floor=a[mid];
			  i=mid+1;
		  }
		  else if(a[mid]>x ){
			  ceil=min(ceil,a[mid]);
			  j=mid-1;
		  }
	  }
	  if(ceil==123456){
		  ceil=-1;
	  }
	  ans.first=floor;
	  ans.second=ceil;
	  return ans;
}
