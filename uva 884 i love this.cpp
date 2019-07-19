#include<bits/stdc++.h>

using namespace std;
#define N 1000007
int keep[1000005];

int main()
{

int n;
keep[1]=0;
for(int i=2;i<=N;i++)
    keep[i]=1;
for(int i=2;i<=N;i++)
{
    if(keep[i]==1)
    {
        for(int j=2;i*j<=N;j++)
        {
            keep[i*j]=keep[i]+keep[j];
            //cout<<(i*j)<<" "<<keep[i*j]<<endl;
        }
    }
}
 for(int j=2;j<=N;j++)
        {
            keep[j]+=keep[j-1];
        }

    while(scanf("%d",&n)==1 && n!=0)
    {
        printf("%d\n",keep[n]);
    }

}



