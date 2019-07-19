#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int arr[10000];
    while(scanf("%d %d",&n,&k)==2 && n!=0)
    {
        int ans=0;
        int mod,newn;
        newn=n;
        while(newn>=k)
        {
           int temp  = newn/k;
           ans += temp*k;
 //mod=newn%k;
           newn-=(temp*k);
           newn+=temp;

        }
        ans+=newn;
        printf("%d\n",ans);
    }
    return 0;
}

