#include<bits/stdc++.h>
using namespace std;
vector<int>g[6];
bool adj[6][6];
char ans[10];

void backtrck(int node,int pos)
{
    if(pos==9)
    {
        puts(ans);
        return;
    }
    for(int p=0; p<g[node].size(); p++)
    {
        int to=g[node][p];
        if(!adj[node][to])
        {
            ans[pos]=to+'0';
            adj[to][node]=adj[node][to]=true;
            backtrck(to,pos+1);
            adj[to][node]=adj[node][to]=false;
        }
    }
}
int main()
{
    g[1].push_back(2);
    g[1].push_back(3);
    g[1].push_back(5);

    g[2].push_back(3);
    g[2].push_back(5);
    g[2].push_back(1);

    g[3].push_back(1);
    g[3].push_back(2);
    g[3].push_back(4);
    g[3].push_back(5);

    g[5].push_back(1);
    g[5].push_back(2);
    g[5].push_back(4);
    g[5].push_back(3);

    g[4].push_back(3);
    g[4].push_back(5);
    ans[9]=NULL;
    ans[0]='1';
    for(int i=1; i<=5; i++)
        sort(g[i].begin(),g[i].end());
    memset(adj,false,sizeof(adj));
    backtrck(1,1);

}
