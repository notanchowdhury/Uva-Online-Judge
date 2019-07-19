#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int num,i,j,k,x,y,middle,big;
    while(scanf("%lld",&num)==1&&num!=0)
    {
        k=sqrt(num);
        if(k*k==num)
        {
            if(k%2==0)
            {
                cout<<k<<" "<<1<<endl;
            }
            else{
                cout<<1<<" "<<k<<endl;;
            }
        }
        else{
                big=k+1;
                middle=(((k*k)+(big*big))/2)+1;
            if(k%2==1  && big%2==0){
                if(num<middle)
                {
                    x=num-(k*k);
                    y=((big*big)-middle)+1;
                    cout<<x<<" "<<y<<endl;
                }
                else if(num==middle)
                {
                    x=middle-(k*k);
                    y=((big*big)-middle)+1;
                    cout<<x<<" "<<y<<endl;
                }
                else if(num>middle)
                {
                    x=middle-(k*k);
                    y=((big*big)-num)+1;
                     cout<<x<<" "<<y<<endl;
                }
            }
            else{
               if(num<middle)
               {
                   long long int temp=(big*big)-middle;
                   x=temp+1;
                   y=(num-(middle-temp))+1;
                    cout<<x<<" "<<y<<endl;

               }
               else if(num==middle)
               {
                long long int temp=(big*big)-middle;

                   x=temp+1;

                      cout<<x<<" "<<x<<endl;
               }
               else if(num>middle)
               {
                long long int temp=(big*big)-middle;

                   x=((big*big)-num)+1;
                   y=temp+1;
                    cout<<x<<" "<<y<<endl;

               }

            }

        }
    }
    return 0;
}
