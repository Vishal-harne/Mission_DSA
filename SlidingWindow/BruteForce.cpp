
#include <bits/stdc++.h>
using namespace std;
int findmaxsum(vector<int> & arr,int n,int k){
    //store the minimum possible maxi
    int maxi=-1;
    //iterate till index not go out of array
    for(int i=0;i<=(n-k);i++){
        //store the sum for subarray and make it zero for new //subarray
        int sum=0;
        for(int j=i;j<(i+k);j++){
            sum+=arr[j];
        }
        maxi=max(maxi,sum);
        //store the maximum subarray sum
        // cout<<maxi<<" "<<endl;
    }
    return maxi;
}
int main() {
    cout<<"Enter the value of N and K ";
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    cout<<"Show the value of maxisum of K size subarray";
     cout<<findmaxsum(arr,n,k);
     
    return 0;
}
