#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the value of n";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout<<"*"<<" ";
            }
        }
        else{
            int j=1;
          while(j<=n){
                if(j==1){
                cout<<"*"<<" ";
                }
                else if(j==n){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
                j++;
          }
        }
        cout<<endl;
    }
   
    return 0;
}
