
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 1009
#define MAX_W 1009
int n;
int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int cost[MAX_N+1];
int cap[1008];
int CAP;
int func(int i,int w) {
	if(i==n+1) return 0;
	if(dp[i][w]!=-1) return dp[i][w];
	int profit1=0,profit2=0;
	if(w+weight[i]<=CAP)
		profit1 = cost[i] + func(i+1,w+weight[i]);
	profit2 = func(i+1,w);
	dp[i][w] = max(profit1,profit2);
	return dp[i][w];
}
int main()
{
	int testcase;
	cin>>testcase;
	for(int p=1;p<=testcase;p++)
    {

	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d\n",&cost[i],&weight[i]);
	}
	int g,sum=0;

	cin>>g;
	for(int r=1;r<=g;r++)
    {
        cin>>cap[r];
    }
    for(int r=1;r<=g;r++)
    {

        memset(dp,-1,sizeof(dp));
        CAP=cap[r];
        sum+=func(1,0);
       // printf("%d\n",sum);
    }
	printf("%d\n",sum);
	}
return 0;
}
