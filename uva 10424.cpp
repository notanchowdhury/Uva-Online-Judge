#include<bits/stdc++.h>
using namespace std;
int digitsum(int n)
{
    int sum=0;
    while(n>0 ||sum>9)
    {
        if(n==0&&sum>9)
        {
            n=sum;
            sum=0;
        }
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    char arr[10000],arr2[10000];
    while(gets(arr))
    {
        if(strlen(arr)==0)
            break;

        gets(arr2);
        int hor=0;
       int lov=0;
      // puts(arr);
      // puts(arr2);
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]>='a'&&arr[i]<='z')
                hor+=(arr[i]-'a')+1;
            if(arr[i]>='A'&&arr[i]<='Z')
                hor+=(arr[i]-'A')+1;
        }
        for(int i=0;i<strlen(arr2);i++)
        {
            if(arr2[i]>='a'&&arr2[i]<='z')
                {lov+=(arr2[i]-'a')+1;
                }
            if(arr2[i]>='A'&&arr2[i]<='Z')
                lov+=(arr2[i]-'A')+1;
        }

        lov=digitsum(lov);
        hor=digitsum(hor);
       if(lov>hor)
            swap(lov,hor);
       double ans = (double)lov/(double)hor;
       ans*=100;

        printf("%.2lf %\n",ans);
    }
    return 0;
}

