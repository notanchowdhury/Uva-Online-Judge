#include<iostream>
#include<cstdio>
using namespace std;
int checkdigit(int num)
{
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    return count;
}
int main()
{
    int n,i,j,sum,k;
    int arr[103];
   j=0;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;
        else{
            arr[j++]=n;
        }
    }
         int loop;
          cout<<"PERFECTION OUTPUT"<<endl;
         for(loop=0;loop<j;loop++){
            int sum=0;
           // cout<<" arr[loop]= "<<arr[loop]<<endl;
        for(i=1;i<=arr[loop]/2;i++)
        {
            if(arr[loop]%i==0)
            {
                sum=sum+i;
            }
        }

       for(i=1;i<=5-checkdigit(arr[loop]);i++)
                cout<<" ";

        if(sum==arr[loop]){

            cout<<arr[loop]<< "  PERFECT"<<endl;
        }

        else if(sum<arr[loop])
             cout<<arr[loop] <<"  DEFICIENT"<<endl;
        else
            cout<<arr[loop]<<"  ABUNDANT"<<endl;
         }
         cout<<"END OF OUTPUT"<<endl;

}
