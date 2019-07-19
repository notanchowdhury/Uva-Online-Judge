#include<iostream>
using namespace std;
int main()
{
    int testcase,i,j,k,rungs,arr[100005];
    cin>>testcase;
    for(i=1;i<=testcase;i++)
    {
        cin>>rungs;
        k=0;
    int remain;
            for(j=0;j<rungs;j++)
            {
                cin>>arr[j];
            }
             int prev;

            k=arr[0];
           prev=k;
            remain=k-1;
            for(j=0;j<rungs-1;j++)
            {
                int p=arr[j+1]-arr[j];
                if(p>prev)
                {
                    k=p;
                    prev=k;
                    remain=k-1;


               }

              else   if(p==remain){
                    remain--;

                   }
               else if(p>remain){
                    k++;
                    remain=k;

               }
             }
              cout<<"Case "<<i<<": "<<k<<endl;

         }
       return 0;

}

