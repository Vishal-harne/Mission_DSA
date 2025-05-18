#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,d;
  cin>>n>>d;
  vector<int>ans(n);
  for(int i=0;i<n;i++){
      cin>>ans[i];
  }
  
  int cnt=0;
  for(int i=0;i<n-2;i++){
      for(int j=i+1;j<n-1;j++){
          for(int k=j+1;k<n;k++){
              if((ans[k]-ans[i])<=d){
                  cnt++;
              }
          }
      }
  }
 cout<<cnt<<endl;
 return 0;
}


//optimised solution o(n2)
#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;

    vector<long long> x(n);
    
    for (int i = 0; i < n; ++i)
        cin >> x[i];
        
        

    long long result = 0;
      
    int j = 0;
    
    for (int i = 0; i < n; ++i) {
        while (j < n && x[j] - x[i] <= d)
            j++;
        long long cnt = j - i - 1;
        if (cnt >= 2)
            result += cnt * (cnt - 1) / 2;
            cout<<cnt<<endl;
            
    }

    cout << result << endl;
    return 0;
}


