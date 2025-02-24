// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> & ans,int low,int mid,int high){
    cout<<"i am inside merge"<<endl;
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid  && right<=high){
        if(ans[left]<=ans[right]){
            temp.push_back(ans[left]);
            left++;
        }
        else{
             temp.push_back(ans[right]);
             right++;
        }
    }
    while (left <= mid) {
        temp.push_back(ans[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(ans[right]);
        right++;
    }
    //very simple the temp is dynamic array so when it changes size to adjust this into the ans array need ot adjust the index
     for (int i = low; i <= high; i++) {
        ans[i] = temp[i - low];
    }
}

void mergesort( vector<int> & ans,int low,int high){
    int mid=(low+high)/2;
    if(low>=high){
        return ;
    }
    cout<<"left hitted"<<endl;
    mergesort(ans,low,mid);
    cout<<"right hitted"<<endl;
    mergesort(ans,mid+1,high);
    cout<<"merge hitted"<<endl;
    merge(ans,low,mid,high);
}

int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    mergesort(ans,0,n-1);
    for (int i = 0; i <n ; i++) {
       cout<<ans[i]<<" ";
    }
    return 0;
}
