#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[40000005],ar2[40000005];
#define N 4005
int a[N],b[N],c[N],d[N];
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    //freopen("1152.txt","r",stdin);
    IOS
    int n;
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i]>>c[i]>>d[i];
        }
        int ind=0;
//  map<ll int, int>mp;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                ar[ind]=a[i]+b[j];
                ar2[ind++]=-(c[i]+d[j]);
            }

        sort(ar,ar+ind);
        //  sort(ar2,ar2+ind);
        int cnt=0;
//cout<<ind<<endl;
        for(int i=0; i<ind; i++)
        {
            int low=0,high=ind-1;

            int tmp=ar2[i];
            while(low<=high)
            {
                int mid=low+high;
                mid/=2;
                if(ar[mid]==tmp)
                {
                    cnt++;
                    for(int p=mid+1; p<ind &&ar[p]==tmp; p++)cnt++;
                    for(int p=mid-1; p>=0 &&ar[p]==tmp; p--)cnt++;
                   // cout<<ar[mid]<< " "<<cnt<<endl;
                    break;
                }
                else if(ar[mid]>tmp)
                    high=mid-1;
                else
                    low=mid+1;

            }
        }


        cout<<cnt<<endl;
        if(tcase)
        cout<<endl;
    }
}

