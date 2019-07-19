#include<iostream>

using namespace std;
int main()
{

    int arr[10];
    int i,j,k,test;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        int num;
        cin>>num;
      for(j=0;j<10;j++)
      {
          arr[j]=0;
      }
        for(j=1;j<=num;j++)
        {
            int temp;
            k=j;
            while(k!=0)
            {
                temp=k%10;
                arr[temp]++;
                k=k/10;
            }
        }
         for(j=0;j<10;j++)
      {
         cout<< arr[j];
         if(j!=9)
            cout<<" ";
      }
      cout<<endl;
    }
    return 0;
}
