#include<stdio.h>
#define sz 100000000
#define sz1 100000000
long long int i,j,k;

int pr[sz1],ar[sz];

void sieve()
{

    k=0;
    pr[k]=2;
    k++;
    ar[0]=ar[1]=1;
    for(i=3;i<sz;i+=2){
        if(ar[i]==0){
            for(j=i*i;j<sz;j+=(i*2)){
                ar[j]=1;
            }
            pr[k]=i;
            k++;
        }
        ar[i+1]=1;
    }
}
int main()
{
    int n,chk,c;
    sieve();

    while(scanf("%d",&n)==1&&n!=0&&n<=1000000)
    {
        c=0;
        for(i=0;pr[i]<=n;i++)
        {
          chk=n-pr[i]  ;

          if(ar[chk]==0)
          {
              printf("%d:\n%d+%d\n",n,pr[i],chk);
              c++;
              break;
          }

        }
        if(c==0)
        {
        printf("%d:\nNO WAY!\n",n);
        }
    }
    return 0;
}
