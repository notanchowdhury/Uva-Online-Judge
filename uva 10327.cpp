#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int count,kase,i,j,arr[1010];
    while(scanf("%d",&kase)==1)
    {
        count=0;
        for(i=0;i<kase;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<kase;i++)
        {
            for(j=i+1;j<kase;j++)
            {
                if(arr[i]>arr[j])
                    count++;

            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
    return 0;
}
