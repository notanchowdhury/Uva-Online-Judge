#include<iostream>
#include<cstdio>
#include<string.h>
#include<map>
using namespace std;

int main()
{
     string sup;
    map<string, int>mymap;
    int test_case,total;
    char str[35];
    cin>>test_case;

    getline(cin,sup);
   // getline(cin,sup);
    for(int i=0;i<test_case;i++)
    {
        total=0;


        while(gets(str))
        {
            if(strlen(str)==0)
            {
                break;
            }
           if(mymap.count(str)==0){
                mymap[string (str)]=1;
            }
            else
                mymap[string (str)]=mymap[string (str)]+1;

            total++;
        }
        map<string,int>::iterator it;
        double factor=100.0/total;
        for(it=mymap.begin();it!=mymap.end();it++)


        {
            double out=(*it).second*factor;
            cout<<(*it).first<<" ";
            printf("%.4lf\n",out);
        }
         mymap.clear();
        if(i!=test_case-1){
        cout<<endl;

        }

    }
    return 0;
}
