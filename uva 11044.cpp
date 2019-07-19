#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        n--;
        m--;
        n--;
        m--;
        int cnt;
        if(n%3==0)
        cnt= n/3;
        else
            cnt=(n/3)+1;
       // cout<<cnt<<endl;
        int cn2;
        if(m%3==0)
        cn2=m/3;
        else
            cn2=(m/3)+1;
        cn2*=cnt;
        cout<<cn2<<endl;


    }
    return 0;
}
