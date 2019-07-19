#include<iostream>
#include<stdio.h>
using namespace std;
int vis[110][110];
char g[110][110];

    int row,col;
    int count;

int dfs(int a,int b)
{

    if(a<0||b<0||a>=row||b>=col)
    {
        return 1;
    }

    if(g[a][b]=='.'){
        return 1;
    }
    else {
        return 2;
    }
}
int main()
{
    while(1){
            count=0;
   int chk=0;
    cin>>row>>col;
    if(row!=0&&col!=0){


    for(int i=0;i<row;i++)
    {

      cin>>g[i];

    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){

           if(g[i][j]=='*')
           {
               chk= dfs(i,j+1)*dfs(i,j-1)*dfs(i-1,j)*dfs(i+1,j)*dfs(i-1,j-1)*dfs(i-1,j+1)*dfs(i+1,j-1)*dfs(i+1,j+1);
               if(chk==1)
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

