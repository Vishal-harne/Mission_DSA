// here we have to find out the closest number 
// 1)find the questiont by dividing the divident by divisor and the multiplying the question with divosor to know the first possible answer(q*n)
// 2)but to closest can be bigger than than the actual divident so by adding 1 to it ((q+1)*n) this is another potencial answer
// 3)if any one of n or m is negative then (q-1)*m can also be answer 
//those have maximum absolute value difference will be the right answer

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the value of n";
    int n,m;
    cin>>n>>m;
    
    int q=n/m;
    int n1=(m*q);
    int n2=(m*n)>0?(m*(q+1)):m*(q-1);
    
    if(abs(n1-n)>abs(n2-n)){
        cout<< n2<<endl;
    }
    else{
        cout<<n1<<endl;
    }
    
    return 0;
}
