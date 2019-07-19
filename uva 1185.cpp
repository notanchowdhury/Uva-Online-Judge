#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int test;
    double sum;
    int fact,t;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>fact;
        sum=0.0;
        t=0;
        for(int j=fact;j>0;j--)
        {
            sum+=log10(j);
        }
        t=floor(sum)+1;
        cout<<t<<endl;
    }
    return 0;

}
