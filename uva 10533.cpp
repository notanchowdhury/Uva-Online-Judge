#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define sz 1000009
int pr[sz],ar[sz],i,j,k,ok,sl,keepnum[sz];
void sieve()
{
    sl=0;
   int ind=0;
    long long int i,j;
    k=0;
    pr[k]=2;
    keepnum[pr[k]]=1;
    sl=1;
    k++;
    ar[0]=ar[1]=1;
    ar[4]=1;
    for(i=3; i<sz; i+=2)
    {
        if(ar[i]==0)
        {
            for(j=i*i; j<sz; j+=(i*2))
            {
                ar[j]=1;

            }
            pr[k]=i;
            ok=pr[k];
            int cnt=0;
            while(ok)
            {
                cnt+=ok%10;
                ok/=10;
            }
            if(ar[cnt]==0)
            {
                keepnum[pr[k]]=++sl;
               // cout<<pr[k]<<"->"<<keepnum[pr[k]]<<endl;
            }
            k++;
        }
        if(i+1<sz)
        {
            ar[i+1]=1;
        }
    }
   int apatoto=0;
    for(int tt=0;tt<1000009;tt++)
    {
       if(keepnum[tt]>apatoto)
            apatoto=keepnum[tt];

       keepnum[tt]=apatoto;
                 //  cout<<keepnum[tt]<<" -> "<<tt<<endl;
    }
}
int main()
{
    int n;
    int t1,t2;

    sieve();
    cin>>n;

    while(n--)
    {
        cin>>t1>>t2;
        int cntprm=0;

        cntprm=keepnum[t2]-keepnum[t1];
        if(ar[t1]==0)
        {
            int crntvalue=t1,cntthis=0;
            while(crntvalue)
            {
            cntthis+=crntvalue%10;
            crntvalue/=10;
            }
            if(ar[cntthis]==0)
                cntprm++;
        }
        cout<<cntprm<<endl;
    }
    return 0;
}

