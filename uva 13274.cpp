#include<bits/stdc++.h>
using namespace std;
vector<int>v[1001],ans[1001];
int mark[1001],k;
int dfs(int node)
{
    mark[node]=1;
    ans[node].clear();
    for(int i=0;i<v[node].size();i++)
    {
        int tmp=v[node][i];
        if(!mark[tmp])
        {
            if(v[tmp].size()>=k)
            {
                ans[node].push_back(dfs(tmp));
            }
            else
                ans[node].push_back(1);
        }
    }
    if(ans[node].size()<k)
        return 1;
    sort(ans[node].begin(),ans[node].end(),greater<int>());
    int sum=1;
    for(int i=0;i<k;i++)
    {
        sum+=ans[node][i];
    }
    return sum;
}
int solve()
{
    int n;
    cin>>n>>k;
    for(int i=0;i<=n;i++)
    v[i].clear();
    for(int i=1;i<=n-1;i++)
    {
        int u,vi;
        cin>>u>>vi;
        v[u].push_back(vi);
    v[vi].push_back(u);}
    if(v[1].size()<k)
        return 1;
        memset(mark,0,sizeof(mark));
    return dfs(1);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tcase,p=1;
    cin>>tcase;
    while(tcase--)
    {
        cout<<"Case "<<p<<": "<<solve()<<endl;
        p++;
    }
    return 0;
}
