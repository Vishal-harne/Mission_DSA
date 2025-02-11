 int steps=arr[0];
       int jump=1;
       int max_reach=arr[0];
       if(n<=1)
       {
        return 0;
       }
       if(arr[0]==0)
       {
           return -1;
       }
      
       
       
       for(int i=1;i<n-1;i++)
       {
           max_reach=max(max_reach,i+arr[i]);
           steps--;
           if(steps==0)
           {
               steps=max_reach-i;
               jump++;
               if(i>=max_reach)
               return -1;
           }
       }
       return jump;
