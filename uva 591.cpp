#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[10000];
     int kase=1;
    while(scanf("%d",&n)==1&& n!=0)
    {
        int no_ofbricks=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            no_ofbricks+=arr[i];
        }

        int eachstack=no_ofbricks/n ;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>eachstack)
                ans+=(arr[i]-eachstack);

        }
        printf("Set #%d\n",kase++);
        printf("The minimum number of moves is %d.\n",ans);
        printf("\n");
    }
    return 0;
}
