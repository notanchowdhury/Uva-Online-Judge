#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b=17,p,mod;
     char str[100000];
  while(scanf("%s",&str))
    {

      if(strlen(str)==1 && str[0]=='0')
           break;


        p=0;

             for(int i=1;i<=strlen(str);i++)
        {
            p=p*10+(str[i-1]-'0');

            if(p>=b)
            {
             mod=p%b;
             p = mod;

            }
        }
        if(p==0)
                printf("1\n");
            else
                printf("0\n");
    }
    return 0;
}

