#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS

    int n,strt[10006],des[10006];
    // vector<pair<int,int> >v;st arr[10008];
    //freopen("13278.txt","r",stdin);
    while(scanf(" %d ",&n) == 1 && n)
    {
        int i,l,r,ad,sub;
        int mx=-1;
        for(i=0; i<=10001; i++)
        {
            strt[i]=0;
            des[i]=0;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&l,&r);
            sub=l-r;
            if(sub<0)
                strt[0]++;
            else
                strt[sub]++;

            ad=l+r;
            if(ad>10000)
                des[10000]++;
            else
                des[ad]++;
        }
        int tmp=0;
        for(i=0; i<10001; i++)
        {
            tmp+=strt[i];
            mx=max(mx,tmp);
            tmp-=des[i];
        }
        printf("%d\n",mx);
    }
}
