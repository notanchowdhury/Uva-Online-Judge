#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt =0;
        int f;
        cin>>f;
        while(f--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            cnt=cnt+(a*c);

        }
        cout<<cnt<<endl;
    }
    return 0;
}
