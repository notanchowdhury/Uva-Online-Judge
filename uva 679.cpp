#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int endss;
#define LL long long

inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

int find_ball(int value,int start_node)
{
    int left, right;
    left=2*start_node;
    right=left+1;
    if(left<=endss-1&&right<=endss-1){
    if(value%2==0)
        return find_ball(value/2,right);
    else
       return  find_ball(value/2 +1,left);
     }
     else
     {
         return start_node;
     }
}

int main()
{
   int t,i,j,keep,k,start;

   scanf("%d",&t);
   long int depth,ball;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&depth);
        scanf("%d",&ball);
         if(depth==-1)
            break;
   // start=pow(2,depth-1);
    endss=Power(2,depth);
   printf("%d\n",find_ball(ball,1));
    }
    int lastinput;
    scanf ("%d", &lastinput);
    return 0;
}
