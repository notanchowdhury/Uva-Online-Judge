#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    int N,Q;
     int countcase=1;
    while(scanf("%d %d",&N,&Q)==2&&N!=0&&Q!=0)
    {
        int arr[10005];

        bool bool_arra[10005];
        for(int i=0;i<N;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+N);
        int q;
       queue<int>q1;
        queue<int>q2;
   int count_bool_ar=0;
        for(int i=0;i<Q;i++)
        {
            scanf("%d",&q);
            q2.push(q);
            bool flag=false;

                int low=0,high=N-1,mid;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(arr[mid]==q)
                    {
                        flag=true;
                        int k=mid-1;
                        while(arr[k]==q)
                        {
                           mid--;
                           k--;
                        }

                        q1.push(mid);
                        break;

                    }
                    if(arr[mid]>q)
                    {
                        high=mid-1;
                    }
                    else
                        low=mid+1;
                }
                if(flag)
                {
                    bool_arra[count_bool_ar++]=true;
                }
                else
                    bool_arra[count_bool_ar++]=false;
        }
        int arrc=0,x,y;
        printf("CASE# %d:\n",countcase);
        countcase++;


       while(!q2.empty())
       {
           if(bool_arra[arrc])
           {
               x=q2.front();
               y=q1.front() +1;
               printf("%d found at %d\n",x,y);
               q1.pop();

           }
           else{
            x=q2.front();
            printf("%d not found\n",x);
           }
           q2.pop();
           arrc++;
       }
 }
 return 0;
}
