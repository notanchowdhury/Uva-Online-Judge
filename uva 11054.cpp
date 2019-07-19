#include<bits/stdc++.h>
#define ll long long
using  namespace std;
int main()
{
    ll n;
    int arr[100005];
    while(scanf("%lld",&n)==1&& n!=0)
    {
        for(int i=0;i<n;i++)
            cin>>arr[i];
            ll buyers=0,sellers=0,sum=0,tmp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                sellers+=arr[i];
            }
            else{
                buyers+=arr[i];
            }
            tmp=buyers+sellers;
         ll   keep=tmp;
            if(tmp<1)
                keep*=-1;
            sum+=keep;
        }
        cout<<sum<<endl;
    }
}
