#include<iostream>
#include<string.h>
using namespace std;
int ar[1000005];
void makekmptable(const string &str)
{
    int size=str.size();
    ar[0]=-1;
    ar[1]=0;
    int key=2;
   int  flag=0;
    while(key<size)
    {
        if(str[key-1]==str[flag])
        {
            flag++;
            ar[key]=flag;
            key++;
        }
        else if(flag>0)
        {
            flag=ar[flag];
        }
        else{
            ar[key]=0;
            key++;
        }

    }
}
int main()
{
    string s;
    while(cin>>s,s.find('.')==string::npos)
    {
        makekmptable(s);
        int start=s.size()-1;
        int endd=ar[start];
        if(endd!=-1&&s[start]!=s[endd])
        {
            endd=min(0,endd-1);
        }
        int dif=start-endd;
        cout<<s.size()/dif<<endl;
    }
}
