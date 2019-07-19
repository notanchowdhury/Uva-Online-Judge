#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int num;
    while(scanf("%d",&num)==1)
    {
        if(num<0)
            break;


        int i,j,k,count,min=0,f3=0;
        bool flag;
        for(j=1;j*j<=num;j++)
        {
            if(num==3)
               {
                   cout<<"3 coconuts, 2 people and 1 monkey"<<endl;
                   f3=1;
                   break;
               }

            flag=false;
            count=0;
            int keepnum=num;
            while(1)
            {
                if(keepnum%j==1)
                {
                    k=keepnum/j;
                    keepnum=keepnum-k-1;
                    count++;
                }
                else if(keepnum%j==0)
                {
                    flag=true;
                    break;
                }
                else if(keepnum%j>=2)
                    break;
            }

            if(count==j&&flag)
            {
                if(j>min)
                {
                    min=j;
                }
            }
        }
        if(min==0&&f3==0)
        cout<<num<<" coconuts, no solution"<<endl;

        else if(f3==0)
            cout<<num<<" coconuts, "<<min<<" people and 1 monkey"<<endl;
    }
    return 0;
}
