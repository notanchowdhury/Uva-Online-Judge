#include<stdio.h>

 int main()
 {
     int N,S;
     int arr[120000+1];
     while(scanf("%d %d",&N,&S)==2)
     {
         for(int i=0;i<N;i++)
            scanf("%d",&arr[i]);

        int sum=0,start=-1;
       int  minn=120000;
        for(int i=0;i<N;i++)
        {
            while(sum<S&&start+1<N)
                {
                sum+=arr[++start];
            }
            if(minn>start-i && sum>=S)
                minn=start-i;

            sum-=arr[i];
        }
        if(minn==120000)
            printf("0\n");
        else
            printf("%d\n",minn+1);

     }
return 0;
 }

