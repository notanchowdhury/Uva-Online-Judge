#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[10000],i,j,money,total_books,min,dif,b1,b2,ans1,ans2;
    while(scanf("%d",&total_books)==1&&total_books!=0)
    {
        min=1000000;
        for(b1=0;b1<total_books;b1++)
        {
            scanf("%d",&arr[b1]);
        }
        cin>>money;

        for(b1=0;b1<total_books;b1++)
        {
            for(b2=b1+1;b2<total_books;b2++)
            {
                if((arr[b1]+arr[b2])==money)
                {
                    if(arr[b1]>arr[b2]){
                        dif=arr[b1]-arr[b2];
                    }
                    else
                        dif=arr[b2]-arr[b1];



                    if(dif<min)
                    {
                        min=dif;
                     if(arr[b1]>arr[b2]){
                        i=arr[b1];
                        j=arr[b2];
                    }
                    else{
                       j=arr[b1];
                       i=arr[b2];}

                    }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<j<<" and "<<i<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
