#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
#define MAXC 1008
char A[MAXC],B[MAXC];
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
int calcLCS(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0') return 0;
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
	while(gets(A))
       {
           if(strlen(A)==0)
            break;

           gets(B);
	if(strlen(A)==0||strlen(B)==0)
        break;
	for(int i=0;i<MAXC;i++)
    {
        for(int j=0;j<MAXC;j++)
        {
            dp[i][j]=0;
            visited[i][j]=0;
        }
    }
	printf("%d\n",calcLCS(0,0));

	}
	return 0;

}

