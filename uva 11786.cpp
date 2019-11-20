#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int ti=1; ti<=n; ti++)
    {
        cin>>s;
        stack<int>st;
        int level=0,flat=0;
        for(int i=0; i<s.size(); i++)
        {

         if(s[i]==92)
         {
             st.push(i);
         }
          if(s[i]=='/')
         {
             if(st.empty())
                continue;
            level+=(i-st.top());
            st.pop();
         }
        }
        cout<<level<<endl;
    }
}
