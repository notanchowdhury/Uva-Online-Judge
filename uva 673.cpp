#include<cstdlib>
#include<iostream>
#include<stack>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{


    int test_case;
    stack<char>p;
    cin>>test_case;
    getchar();

    char str[10000];
    for(int i=1;i<=test_case;i++)
    {
        int count0=0;
int  count1=0;
  int count2=0;
int  count3=0;


    while(!p.empty())
        p.pop();


       gets(str);
        if(str=="")
        {
            cout<<"Yes"<<endl;
            continue;
        }


        else{
      int k=strlen(str);
        for(int j=0;j<k;j++)
        {
            if(str[j]=='(')
              {
                  p.push(str[j]);
                  count0++;
              }

            else if(str[j]==')')
            {
                if(!p.empty()){
                if(p.top()=='('){
                    p.pop();
                     }
                }

             count1++;
            }
             if(str[j]=='[')
              {
                  p.push(str[j]);
                  count2++;
              }

            else if(str[j]==']')
            {
                if(!p.empty()){
                if(p.top()=='['){
                    p.pop();
                     }
                }

             count3++;
            }
        }
     }

        if(p.empty()&&(count0==count1)&&(count2==count3))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
