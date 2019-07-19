
#include<cstdio>
using namespace std;
#define highest 7500
  static  const int coins[4]={5,10,25,50};
  static int arr[highest]={1,1,1,1,1};


int main()

{
    register int i,j;
    for( i=5;i<highest;++i)
        arr[i]=arr[i-1];


    for( i=0;i<4;++i)
    {
        for( j=coins[i];j<highest;++j)
        {
            arr[j]=arr[j]+arr[j-coins[i]];
        }
    }
    int coin;
   while(scanf("%d",&coin)==1)
    printf("%d\n",arr[coin]);

    return 0;
}




