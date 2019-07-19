#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
typedef  long long ll;
#define LL long long
int bigmod(LL int base,LL int power,LL int mod)
{
    LL int answer=1;
    base %= mod;
    while(power)
    {
        if(power & 1)
            answer= (answer*base) %mod;

        base=(base*base)%mod;
        power >>= 1;
    }
    return answer;
}
int firstThreeDigits(LL int n,LL int k)
{
    double res=k * log10(n);
   LL int ret= pow(10,(res - ll(res)))*100;

    return ret;
}
int main()
{
   LL int tcase;
   // freopen("uva11029.txt","r",stdin);
    scanf("%lld",&tcase);
    for(int i=1;i<=tcase;i++)
    {
       LL int n,k;
        scanf("%lld %lld",&n,&k);

printf("%d...%03d\n",firstThreeDigits(n,k),bigmod(n,k,1000));//as we need last three digit, so mod=1000

        //as we need last three digit, so mod=1000
    }
}

