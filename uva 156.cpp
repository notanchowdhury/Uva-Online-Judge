#include<bits/stdc++.h>
using namespace std;
char arr[5000][26];
string sortit(string sor)
{
    for( int i=0;i<sor.length();i++)
    {
        if(sor[i]>='A'&&sor[i]<='Z')
                sor[i]+=32;

    }
    for(int i=0;i<sor.length()-1;i++)
    {
        for(int j=i+1;j<sor.length();j++)
        {
            if(sor[i]>sor[j])
            {
                char temp=sor[i];
                sor[i]=sor[j];
                sor[j]=temp;
            }
        }
    }

    return sor;
}
int main()
{
    set<string> st,lowercaseSet,anana,ana;
    int totalWord=0;
    while(scanf("%s",arr[totalWord]))
    {
        if(strcmp(arr[totalWord],"#")==0)
            break;
        totalWord++;
    }
    int cnt=0;
    for(int i=0; i<totalWord; i++)
        {
            st.insert(arr[i]);
            cnt++;
            if(cnt>st.size())
            {
                anana.insert(sortit(arr[i]));
                cnt=st.size();
            }
        }
    set<string>::iterator it;
    /*for(it = st.begin();it != st.end();it++)
    {
        string st2 = *it;
        lowercaseSet.insert(st2);
    }*/
    for(it = st.begin();it != st.end();it++)
    {
        string st2 = *it;
        if(anana.count(sortit(st2)))
        {
            anana.erase(sortit(st2));
            ana.insert(sortit(st2));
           // cout<<sortit(st2)<< "  ana = "<<st2<<endl;
        }
        else{
            if(ana.count(sortit(st2)))
            {

            }
            else{
                anana.insert(sortit(st2));
               // cout<<sortit(st2) <<"  anana = "<<st2<<endl;
            }
        }

    }
     for(it = st.begin();it != st.end();it++)
    {
       string fl=*it;
       string fl2=sortit(fl);
       if(anana.count(fl2))
       {
           cout<<fl<<endl;
       }
    }
return 0;
}
