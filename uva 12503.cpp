#include<stdio.h>
#include<iostream>
using namespace std;
struct robot{
   // char dir;
    int imprv;
    robot()
    {
        imprv=0;
    }

};
int main()
{
    int tcase,n,i,j,k;
    scanf("%d",&tcase);
    int number=0;
    char str[20];
    while(tcase--)
    {
        scanf("%d\n",&n);
        //getchar();
        number=0;
        robot arr[105];
        for(i=1;i<=n;i++)
        {

            gets(str);
            if(str[0]=='L')
                  {
                      arr[i].imprv=-1;
                      number+=arr[i].imprv;

                  }
           if(str[0]=='R')
                  {
                      arr[i].imprv=1;
                      number+=arr[i].imprv;

                  }
            if(str[0]=='S')
                  {
                      int sum=0;

                      for(j=8;str[j]!='\0';j++)
                      {
                          sum=sum*10 + (str[j]-'0');

                      }
                      arr[i].imprv=arr[sum].imprv;

                      number+=arr[i].imprv;

                  }

        }
        printf("%d\n",number);
    }
return 0;
}
