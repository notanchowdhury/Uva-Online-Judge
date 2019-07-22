/*gcd(a,b)<=a-b and a^b >=a-b , so if(a^b ==a-b) then it is desired pair.
 again gcd(a,b)=a-b therefore a-b is divisor of a */

#include<bits/stdc++.h>
using namespace std;
int ans[30000009];
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=30000007;i++)///here i=a-b
    {
        for(int j=i+i;j<=30000007;j+=i)///here j=a
        {
            if((j^(j-i))==i)///checking a^b = a-b , notice (a^(a-a+b))=(a^b)
                ans[j]++;
        }
        ans[i]+=ans[i-1];
    }
    int tcase=0;
    while(t--)
    {
        tcase++;
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",tcase,ans[n]);
    }
}
