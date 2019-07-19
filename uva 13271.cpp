#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
   long long int a,b,c,d,row,colmn,loop,temp;
    while(scanf("%lld%lld%lld%lld",&a,&b,&c,&d)==4&&a!=0&&b!=0&&c!=0&&d!=0)
    {
       long long int cnt=0;
       if(a>c)
       {
           swap(a,c);
           swap(b,d);
       }

      row=abs(a-c);
       colmn=abs(b-d);
       if(colmn>=row)
        cout<<row+colmn<<endl;

        else{
            if((a%2==0&&b%2==0))
            {
                cnt++;
                row--;
                cnt+=colmn;
                cnt+=colmn;
               // cout<<cnt<<endl;
                row-=colmn;
                if(row%2==0)
                {
                    cnt=cnt+(row/2)*3;
                    cnt+=(row/2)*1;
                }
                else{
                    cnt+=(row/2)*3;
                    cnt+=(row/2)*1;
                    cnt+=3;
                }

            }
           else if(a%2==1&&b%2==1)
            {
                cnt++;
                row--;
                cnt+=colmn;
                cnt+=colmn;
                row-=colmn;
                if(row%2==0)
                {
                    cnt+=(row/2)*3;
                    cnt+=(row/2)*1;
                }
                else{
                    cnt+=(row/2)*3;
                    cnt+=(row/2)*1;
                    cnt+=3;
                }
            }
            else
                {
                cnt++;
            colmn--;
            cnt++;
            row--;
            cnt+=colmn;
            cnt+=colmn;
                row-=colmn;
               if(row%2==0)
                {
                    cnt+=(row/2)*3;
                    cnt+=(row/2)*1;
                }
                else{
                    cnt+=(row/2)*3;
                    cnt+=(row/2)*1;
                    cnt+=3;
                }
        }
        cout<<cnt<<endl;
    }
}
    return 0;
}
