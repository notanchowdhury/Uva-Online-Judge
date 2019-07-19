#include<bits/stdc++.h>
using namespace std;
int minimum,n;
int arr[1000],dp[106][500005];

int func_(int i,int sum,int sum2)
{
    if(i>=n)
    {
            return (sum-sum2<0)?sum2-sum:sum-sum2;
    }
    if(dp[i][sum]!=-1)
        return dp[i][sum];
    int k=0;
     k=min(func_(i+1,sum+arr[i],sum2),func_(i+1,sum,sum2+arr[i]));

    return dp[i][sum]=k;

}
int main()
{

int t;
   // int m,sum,sum2;
    cin>>t;
    while(t--)
    {
        cin>>n;

        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sum=0;sum2=0;

        cout<<func_(0,sum,sum2)<<endl;
    }
    return 0;

}
