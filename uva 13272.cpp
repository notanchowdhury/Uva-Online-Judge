#include<iostream>
#include<cmath>
#include<cstdio>
#include<string.h>
#include<stack>
using namespace std;
int arr[100005];
struct det
{
    char ch;
    int ind;
};
int main()
{
   // freopen("lightoj1012.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    int t;
    string s;
    stack<det>st;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>s;
        int len=s.size();
        for(int j=0; j<=100002; j++)
        {
            arr[j]=0;
        }
        for(int j=len-1; j>=0; j--)
        {
            if(s[j]==')'||s[j]=='}'||s[j]=='>'||s[j]==']')
            {
                det a;
                a.ch=s[j];
                a.ind=j;
                st.push(a);
            }

            else if(!st.empty())
            {
                if(s[j]=='(')
                {
                    det tp=st.top();
                    if(tp.ch==')')
                    {
                        st.pop();
                        arr[j]=(tp.ind - j)+1;
                        if(tp.ind+1<len)
                            arr[j]+=arr[tp.ind+1];
                    }
                    else
                    {
                        det a;
                        a.ch=s[j];
                        a.ind=j;
                        st.push(a);
                    }
                }
               else if(s[j]=='<')
                {
                    det tp=st.top();
                    if(tp.ch=='>')
                    {
                        st.pop();
                        arr[j]=(tp.ind - j)+1;
                        if(tp.ind+1<len)
                            arr[j]+=arr[tp.ind+1];
                    }
                    else
                    {
                        det a;
                        a.ch=s[j];
                        a.ind=j;
                        st.push(a);
                    }
                }
               else if(s[j]=='{')
                {
                    det tp=st.top();
                    if(tp.ch=='}')
                    {
                        st.pop();
                        arr[j]=(tp.ind - j)+1;
                        if(tp.ind+1<len)
                            arr[j]+=arr[tp.ind+1];
                    }
                    else
                    {
                        det a;
                        a.ch=s[j];
                        a.ind=j;
                        st.push(a);
                    }
                }
                if(s[j]=='[')
                {
                    det tp=st.top();
                    if(tp.ch==']')
                    {
                        st.pop();
                        arr[j]=(tp.ind - j)+1;
                        if(tp.ind+1<len)
                            arr[j]+=arr[tp.ind+1];
                    }
                    else
                    {
                        det a;
                        a.ch=s[j];
                        a.ind=j;
                        st.push(a);
                    }
                }
            }
            else
            {
               det a;
               a.ch=s[j];
                        a.ind=j;
                        st.push(a);

            }

        }
        printf("Case %d:\n",i);
        for(int l=0; l<len; l++)
                cout<<arr[l]<<endl;
    }

    return 0;
}

