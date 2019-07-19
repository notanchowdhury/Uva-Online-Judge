#include<cstdio>
#include<iostream>
#include<string.h>
//NOT SOLVED Yet
using namespace std;
#define MAXC 1000
int A[MAXC],B[MAXC],n;
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

int main()
{
    //scanf("%s%s",A,B);
//freopen("uva11029.txt","r",stdin);
    scanf("%d",&n);
    lenA=n;
    lenB=n;
int tmp,tmp2;
    for(int i=0; i<n; i++)
        {scanf("%d",&tmp);
        A[tmp-1]=i;
        }
       // cout<<"S"<<endl;
    int flag=0;
    while(1)
    {
        for(int i=0; i<n; i++)
        {
            if(scanf("%d",&tmp2)!=1)
            {

                flag=1;
                break;
            }
             B[tmp2-1]=i;
        }
        //cout<<"S->"<<endl;
if(flag) break;
        for(int i=0; i<MAXC; i++)
        {
            for(int j=0; j<MAXC; j++)
            {
                visited[i][j]=false;
                dp[i][j]=0;
            }
        }
        printf("%d\n",calcLCS(0,0));

    }

    return 0;

}

