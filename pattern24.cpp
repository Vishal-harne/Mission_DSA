// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    cout<<"enete the value of n";
    int n;
    cin>>n;
    int limit=n*2;
    for(int i=n;i>=1;i--){
        int p=n;
        int x=n-i+1;
        for(int j=1;j<=x;j++){
            cout<<p<<" ";
            p--;
        }
        int limit1=limit-x;
        for(int k=x+1;k<=limit1;k++){
            cout<<i<<" ";
        }
        limit1++;
        for(int m=limit1;m<=limit;m++){
            p++;
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}
