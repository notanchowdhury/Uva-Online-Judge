#include<stdio.h>
#define sz 1000000-1
#define sz1 1000000-1
int i,j,k;
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
    int main(){
    sieve();
    int n,a;
    while((scanf("%d",&n))==1&&n!=0)
    {
        for(i=0;;i++)
            {
                a=n-pr[i];

                if(ar[a]==0)
                {
                    break;
                }
            }

          if(ar[a]==0){
                printf("%d = %d + %d\n",n,pr[i],a);
          }
          else{
            printf("Goldbach's conjecture is wrong.\n");
        }

    }
    return 0;
}
