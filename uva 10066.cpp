#include<bits/stdc++.h>
using namespace std;
#define MAXC 1000
int A[MAXC],B[MAXC];
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
/// Length of longest common subsequence
int calcLCS(int i,int j)
{
	if(i==lenA or j==lenB) return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}

int main() {
   // freopen("uva11029.txt","r",stdin);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=0;
	while(scanf("%d %d",&lenA,&lenB) && lenA!=0 && lenB !=0)
    {
        for(int i=0;i<lenA;i++)
            scanf("%d",&A[i]);
        for(int i=0;i<lenB;i++)
           scanf("%d",&B[i]);
            ++t;
       printf("Twin Towers #%d\n",t);
           printf("Number of Tiles : %d\n\n",calcLCS(0,0));


        for(int i=0;i<=101;i++)
        {
            for(int j=0;j<=101;j++)
            {
                dp[i][j]=0;
                visited[i][j]=false;
            }
        }
    }

	return 0;

}

