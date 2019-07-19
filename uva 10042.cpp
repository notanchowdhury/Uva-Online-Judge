#include<iostream>

#include<stdio.h>
#include<math.h>
#define sz 50000000
using namespace std;
int pr[sz],ar[sz],i,j,k;
void sieve()
{
    long long int i,j;
    k=0;
    pr[k]=2;
    k++;
    ar[0]=ar[1]=1;
    for(i=3; i<sz; i+=2)
    {
        if(ar[i]==0)
        {
            for(j=i*i; j<sz; j+=(i*2))
            {
                ar[j]=1;
            }
            pr[k]=i;
            k++;
        }
        if(i+1<sz)
        {
            ar[i+1]=1;
        }
    }
}
int counts(int n)
{
    int p,countt=0;
    while(n!=0)
    {
        p=n%10;
        countt=countt+p;
        n=n/10;

    }

    return countt;
}
int main()
{
    int g,l,n,root;

    sieve();

    int testcase;
    cin>>testcase;

    for(int test=1; test<=testcase; test++)
    {
        int input_num,flag;
        cin>>input_num;
        for(g=input_num+1;; g++)
        {
            flag=g;
            int countdigit=counts(flag);


            bool check=false;
            int countPrmFact=0;

            root=sqrt(g);
            l=0;
            while(pr[l]<=root && l<k )
            {
                while(g%pr[l]==0)
                {

                    countPrmFact=countPrmFact+counts(pr[l]);
                    g=g/pr[l];
                    if(g==1)
                    {
                        break;
                    }
                    check=true;
                }
                if(g==1)
                {
                    break;
                }
                l++;
            }
            if(g!=1)
            {

                countPrmFact=countPrmFact+counts(g);
            }

            if(countdigit==countPrmFact &&check)
            {
                cout<<flag<<endl;
                break;
            }
            else
                g=flag;
        }
    }
    return 0;
}
