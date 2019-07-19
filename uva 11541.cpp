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
    cin>>n;

    for(int t=1;t<=n;t++)
    {
        scanf("%s",arr);
        int add=0;
        char temp;
        printf("Case %d: ",t);
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                for(int p=1;p<=add;p++)
                {
                    cout<<temp;
                }
                add=0;
                temp=arr[i];
                //cout<<temp<<" ="<<endl;
            }
            else
                add=(add*10)+(arr[i]-'0');
        }
         for(int p=1;p<=add;p++)
                {
                    cout<<temp;
                }
        printf("\n");
    }
    return 0;
}

