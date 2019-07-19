#include<iostream>
#include<cstdio>
using namespace std;
int bigmod(int B,int P,int M)
{
    if(P==0)
        return 1;
    if(P%2)
    {
        return ((B%M)*bigmod(B,P-1,M))%M;
    }
    else{
            int c=bigmod(B,P/2,M);
    return ((c%M)*(c%M))%M;
    }
}
int main()
{
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m))
    {
       int answer= bigmod(b,p,m);
       cout<<answer<<endl;
       cout<<endl;
    }
    return 0;
}
