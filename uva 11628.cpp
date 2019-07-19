#include<iostream>
using namespace std;
#include <stdio.h>
int GCD(long long int i,long long int j)
{
   long long int tmp,gcd;
    if(i==0){
        gcd=j;
    }
   else if(j==0){
        gcd=i;
    }
    else{
        while(j!=0){
            tmp=j;
            j=i%j;
            i=tmp;
        }
        gcd=i;
    }
    return gcd;
}
int main()
{

    int com,round,arr[35];
    while(scanf("%d %d",&com,&round)==2&& com!=0&& round!=0)
    {
        int k=0;
       long long int a;
      long long  int sum=0;
        for(int i=0;i<com;i++)
        {
            for(int j=0;j<round;j++)
            {
                cin>>a;
            if(j==round-1)
            {
                arr[k++]=a;
                sum=sum+a;
            }
            }
        }
        for(int i=0;i<k;i++)
        {
            long long int x=arr[i];
            long long int p=GCD(x,sum);
            if(p==1)
            {
                cout<<x<<" / "<<sum<<endl;
            }
        else
            cout<<(x/p)<<" / "<<(sum/p)<<endl;
        }
    }
    return 0;
}
