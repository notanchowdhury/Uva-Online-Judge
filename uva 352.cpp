#include<iostream>
#include<cstdio>
using namespace std;
int vis[110][110];
char g[110][110];

    int row,col;
    int count;

void dfs(int a,int b)
{

    if(a<0||b<0||a>=row||b>=col)
    {
        return;
    }
    if(vis[a][b]==1){
        return;
    }
    if(g[a][b]=='0'){
        vis[a][b]=1;
        return;
    }
   if(g[a][b]=='1' && vis[a][b]==0){
    vis[a][b]=1;
    dfs(a,b+1);
    dfs(a,b-1);
    dfs(a-1,b);
    dfs(a+1,b);
    dfs(a-1,b-1);
    dfs(a-1,b+1);
    dfs(a+1,b-1);
    dfs(a+1,b+1);
    }

}
int main()
{
    int p=1;
    while(scanf("%d",&row)==1&&row!=0){
            count=0;


    col=row;



    for(int i=0;i<row;i++)
    {
         cin>>g[i];
   for(int j=0;j<col;j++)
        {

            vis[i][j]=0;
        }
    }




    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){

           if(g[i][j]=='1'&&vis[i][j]==0)
           {

               dfs(i,j);
               count++;
           }
        }
    }



        cout<<"Image number "<<p<<" contains "<<count<<" war eagles."<<endl;
        p++;
    }


    return 0;
}


