// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=i+(i-1);
        int j=1;
        int a=65;
        
                while(j<=i){
                    cout<<char(a)<<" ";
                    a++;
                    j++;
                }
                a--;
                while(j<=x){
                    cout<<char(--a)<<" ";
                    j++;
                }
                
            cout<<endl;
        }
       
    return 0;
}
