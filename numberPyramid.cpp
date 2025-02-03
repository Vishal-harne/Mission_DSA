using namespace std;
int main() {
    cout<<"enter the value of n";
    int n;
    cin>>n;
    int a[2]={0,1};
    int b[2]={1,0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        int empspa=(n*2)-(i*2);
        for(int k=1;k<=empspa;k++){
            cout<<" "<<" ";
        }
        
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
