#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   // cin>>t;
    double l[108],w[105],h[105],f[107],v[107],g;
    g=10;
    while(scanf("%d",&t)==1 && t!=0)
    {
      //  cout<<t<<endl;
        for(int i=0; i<t; i++)
            scanf("%lf %lf %lf",&l[i],&w[i],&h[i]);
        for(int i=0; i<t; i++)
            v[i]=l[i]*w[i]*h[i];
        double mx=-10,ans=0;

        for(int i=0; i<t; i++)
        {
            f[i]=g-(g/(2*h[i]));
            if(f[i]>mx)
            {
                mx=f[i];
                ans=v[i];
            }
            else if(f[i]==mx)
            {
                if(ans<v[i])
                    ans=v[i];
            }
        }
       // cout<<ans<<endl;
     printf("%.0f\n",ans);
    }
}
