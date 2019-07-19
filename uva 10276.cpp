#include<stdio.h>
#include<stack>
#include<iostream>
#include<math.h>
using namespace std;
bool isPerfectSquare(int x)
{

 double sr = sqrt((double) x);

  return ((sr - floor(sr)) == 0);
}
int main()
{

    int t, i, j,k,n,count;


    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      stack <int> st[55];
        scanf("%d",&n);
        count=1;
        st[count].push(1);
        for(j=2;;j++)
        {
            bool flag =false;
            for(k=1;k<=count;k++)
            {
                if(isPerfectSquare(st[k].top()+j))
                {
                    st[k].push(j);
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                count++;
                st[count].push(j);
            }
            if(count>n)
            {
                cout<<j-1<<endl;
                break;
            }
        }

    }
    return 0;
}

