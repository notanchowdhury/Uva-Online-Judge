#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int arr[100];
int main()
{
    int t,r;
    cin>>t;
    string st;
    while(t--)
    {

        cin>>st;
        cin>>r;
        for(int i=65; i<=90; i++)
        {
            arr[i]=i;
        }
        for(int i=1; i<=r; i++)
        {
            char ch, ch2;
            cin>>ch>>ch2;
            for(int i=65; i<=90; i++)
            {
                if(arr[i]==ch2)
                {
                    arr[i]=ch;
                }
            }
        }
        int len=st.length();
        for(int i=0; i<len; i++)
        {
            if(st[i]=='_')
            {
                cout<<st[i];
                continue;
            }
            cout<<(char)arr[st[i]];
        }
        cout<<endl;
    }
}
