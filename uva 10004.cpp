#include<bits/stdc++.h>
using namespace std;

int maxx;
int vis[205];
bool flag;
struct node{
  int num;
  int color;
};
vector <int> G[205];
node arr[205];
void bfs(node src)
{
    queue<node>q;
    q.push(src);
    vis[src.num]=1;
    arr[src.num].color=1;


    while(!q.empty())
    {
        node u=q.front();
        for(int i=0;i<G[u.num].size();i++)
        {
             node v;
             v.num=G[u.num][i];
            if(!vis[v.num])
            {
                if(u.color==1)
                  {
                      arr[v.num].color=0;
                  }
                  else
                    arr[v.num].color=1;

                vis[v.num]=1;

                if(u.color==1)
                    v.color=0;
                else
                    v.color=1;

                q.push(v);

            }
            else if(vis[v.num])
            {
                if( arr[v.num].color==u.color)
                {
                    flag = true;
                }
            }
        }
        q.pop();


    }
}
int main()
{
//freopen("10004.txt","r",stdin);
    int t,n,u,v,l;
   while(scanf("%d",&t)==1 && t!=0)
  {

            flag = false;
        scanf("%d",&l);
        int sorc=-1;
        while(l--)
        {
            scanf("%d %d",&u,&v);
            G[u].push_back(v);
            arr[u].num=u;
            arr[u].color=3;
         // G[v].push_back(u);

            if(sorc==-1)
              sorc=u;
        }


               node p;
               p.num=sorc;
               p.color=1;
                bfs(p);


      if(flag)
      {
          cout<<"NOT BICOLORABLE."<<endl;
      }
      else
        cout<<"BICOLORABLE."<<endl;

        for(int i=0;i<205;i++)
        {
            G[i].clear();
            vis[i]=0;
            arr[i].color=3;
            arr[i].num=-3;
        }
    }
    return 0;
}
