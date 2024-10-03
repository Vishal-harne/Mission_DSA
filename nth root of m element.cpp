

class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    int i=1;
	    int j=m;
	    while(i<=j){
	        int mid=i+(j-i)/2;
	        long long  res=1;
	        for(int k=1;k<=n;k++){
	            res*=mid;
	            if(res>m)break;
	        }
	        if(res==m){
	            return mid;
	        }
	        else if(res<m ){
	            i=mid+1;
	        }
	        else{
	            j=mid-1;
	        }
	    }
	    return -1;
	}  
};
