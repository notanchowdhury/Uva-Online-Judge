#include<iostream>
#include<stdio.h>
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
    if(g[a][b]=='*'){
        vis[a][b]=1;
        return;
    }
   if(g[a][b]=='@'&& vis[a][b]==0){
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
    return;
}
int main()
{
    while(1){
            count=0;

    cin>>row>>col;
    if(row!=0){


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

           if(g[i][j]=='@'&&vis[i][j]==0)
           {
               dfs(i,j);
               count++;
           }
        }
    }



        cout<<count<<endl;
    }
    else
        break;
    }
    return 0;
}

