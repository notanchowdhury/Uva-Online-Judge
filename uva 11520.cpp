#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int tcase;
    char ar[17][18];
    cin>>tcase;
    int arr[18][18];
    for(int i=1;i<=tcase;i++)
    {
        int rr;
        cin>>rr;
        getchar();
        for(int j=0;j<13;j++)
        {
            for(int k=0;k<13;k++)
            {
                arr[j][k]=0;
            }
        }
        for(int j=0;j<rr;j++)
        {
           gets(ar[j]);
        }
        for(int j=0;j<rr;j++)
        {
            for(int k=0;k<rr;k++)
            {
              //  cout<<ar[j][k]<<" clear"<<endl;
                if(ar[j][k]>='A'  &&   ar[j][k]<='Z')
                       arr[j][k]=1;
            }
        }
     /*    for(int j=0;j<rr;j++)
        {
            for(int k=0;k<rr;k++)
            {
                cout<<arr[j][k]<<" ";
            }
            cout<<endl;
        }*/
        for(int j=0;j<rr;j++)
        {
            for(int k=0;k<rr;k++)
            {
              //  cout<<"k = "<<k<<endl;
                if(arr[j][k]!=1)
                    {
                bool  flag;
                        for(int l='A';l<='Z';l++)
                        {
                            flag=false;
                            if(k-1>=0)
                            {
                                if(ar[j][k-1]==l)
                                   flag=true;
                            }
                            if(k+1<rr)
                            {
                                if(ar[j][k+1]==l)
                                   flag=true;
                            }
                            if(j-1>=0)
                            {
                                if(ar[j-1][k]==l)
                                   flag=true;
                            }
                            if(j+1<rr)
                            {
                                if(ar[j+1][k]==l)
                                   flag=true;
                            }
                            if(!flag)
                                {ar[j][k]=l;
                            //    cout<<"r="<<j<<" c = "<<k<< " "<<ar[j][k]<<endl;
                                break;
                                }
                        }
                    }
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<rr;j++)
        {
            for(int k=0;k<rr;k++)
            {
                cout<<ar[j][k];

            }
            cout<<endl;
        }
    }
    return 0;
}
