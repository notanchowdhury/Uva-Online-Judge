#include<bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("10004.txt","r",stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,kase=0;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;

        long long int orr=0,andd,i,j,tmp=0;

        int ara[1000],inda=0;
        int arb[1000],indb=0,ans[1000],ans2[1000];
        while(a)
        {
            ara[inda++]=a%2;
            a/=2;
        }
        while(b)
        {
            arb[indb++]=b%2;
            b/=2;

        }
        bool flagor=true;
        int nnd=0;
        if(inda==indb)
        {

            for(int p=inda-1; p>=0; p--)
            {
                if(ara[p]!=arb[p])
                    flagor=false;
                if(flagor)
                    ans2[nnd++]=arb[p];
                else
                    ans2[nnd++]=1;

            }
        }
        else{
             for(int p=indb-1; p>=inda; p--)
                ans2[nnd++]=1;

                for(int p=inda-1;p>=0;p--)
                {
                    ans2[nnd++]=1;
                }
        }
        // cout<<nnd<<endl;

        for(int p=nnd-1,l=0; p>=0; p--,l++)
            if(ans2[p]==1)
                orr+=(1LL << l);

        kase++;
        cout<<"Case "<<kase<<": ";
        if(inda!=indb)
        {
            cout<<orr<<" 0"<<endl;
            continue;
        }
        bool flg=true;
        int newind=0;
        for(int p=inda-1; p>=0; p--)
        {

            if(ara[p]!=arb[p])
                flg=false;
            if(flg)
            {
                ans[newind++]=ara[p];

            }
            else
                ans[newind++]=0;
        }
        for(int p=newind-1,l=0; p>=0; p--,l++)
            if(ans[p]==1)
                tmp+=(1LL << l);

        cout<<orr<<" "<<tmp<<endl;

    }
}
