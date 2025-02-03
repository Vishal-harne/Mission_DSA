#include <iostream>
using namespace std;
int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
    int a[2]={0,1};
    int b[2]={1,0};
    for(int i=1;i<=n;i++){
           if(i%2==0){
                for(int j=1;j<=(i)/2;j++){
                      cout<<a[0]<<" "<<a[1]<<" ";
                 }
            }
            else{
                int x=(i-1)/2;
                for(int j=1;j<=x;j++){
                    cout<<b[0]<<" "<<b[1]<<" ";
                }
                cout<<"1"<<" ";
            }
            cout<<endl;
        
    }
    return 0;
}
