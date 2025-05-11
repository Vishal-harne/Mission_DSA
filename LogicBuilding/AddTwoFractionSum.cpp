//first find GCD of den1 and den2 two get the den in simplest form 
//find LCM of both den1 and den2 bring it in simplesr form by dividing by gcd
//add buoth num1 and num2 to after making den same
//now brigh itg in simplesr form by dividing both number (num/den) by GCD of this number 



int GCDf(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a==b)return a;
    if(a>b)return GCDf(a-b,b);
    if(a<b)return GCDf(a,b-a);
}
void addFraction(int num1, int den1, int num2, int den2) {
    // Your code here
     int GCD= GCDf(den1,den2);
     int LCM=(den1*den2)/GCD;
     
     int num=(num1*(LCM/den1))+(num2*(LCM/den2));
     
     int comm_factor=GCDf(num,LCM);
     
     num=num/comm_factor;
     LCM=LCM/comm_factor;
     cout<<num<<"/"<<LCM<<endl;
}
