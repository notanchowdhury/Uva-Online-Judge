#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(1)
    {
        cin>>s;

        if(s=="#")
        {
            return 0;
        }
        int len=s.size();
        int i;
        char mn=s[len-1];
        int ind=len-1,start=-1;
        for(i=len-2; i>=0; i--)
        {
            if(s[i]<s[i+1])
            {
                start=i;
                break;
            }
        }


        if(start==-1)
        {
            cout<<"No Successor"<<endl;
                continue;
        }
        for(int j=len-1; j>=0; j--)
        {
            if(s[start]<s[j])
            {
                swap(s[start],s[j]);
                sort(s.begin()+start+1,s.end());
                break;
            }
        }
        cout<<s<<endl;

    }
}
