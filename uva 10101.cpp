#include<bits/stdc++.h>
using namespace std;
int main()
{
 //  freopen("uva10101.txt","r",stdin);
    char str[100],ans[100];
    int p;
    int tcase=0;
    while(gets(ans))
    {
        int ind=0,cons=0;
        stack<string>q;
        stack<int>qnum;
        string tmp;
        tmp="";
        int leng=strlen(ans);
//cout<<leng<<endl;

        if(leng==1)
            cons=ans[0]-'0';
        else
        {

            cons =ans[leng-2]-'0';
            cons*=10;
            cons=cons + ans[leng-1]-'0';

        }

//cout<<cons<<endl;
//puts(ans);
        int t=0;
        for(int i=leng-3; i>=0; i--)
        {
            t++;
            if(t==1)
            {
                string p2="shata";
                int num;
                num=ans[i]-'0';

                //cout<<ans[i]<<endl;
                // num*=10+(ans[i+1]-'0');
                tmp=p2;
                q.push(tmp);
                qnum.push(num);
                tmp="";
                // cout<<num<<" ";
            }
            else if(t==3 || (t==2 && i==0))
            {
                if(t==3)
                {
                    string p2="hajar";
                    int num,shala=i+1;;
                    num = ans[i]- '0';
                    // cout<<ans[i+1]<<"= "<<num<<" ";
                    num=(num*10)+(ans[i+1]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                    // cout<<num<<" ";
                }
                else
                {
                    string p2="hajar";
                    int num;
                    num=ans[i]-'0';
                    // num*=10+(ans[i+]-'0');
                    tmp=p2;

                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
            }
            else if(t==5 || (t==4 && i==0))
            {
                if(t==5)
                {
                    string p2="lakh";
                    int num;
                    num=ans[i]-'0';
                    num=(num*10)+(ans[i+1]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
                else
                {
                    string p2="lakh";
                    int num;
                    num=ans[i]-'0';

                    // num*=10+(ans[i+]-'0');
                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
            }
            else if(t==7 || (t==6 && i==0))
            {
                if(t==7)
                {
                    string p2="kuti";
                    int num;
                    num=ans[i]-'0';
                    num=(num*10)+(ans[i+1]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
                else
                {
                    string p2="kuti";
                    int num;
                    num=ans[i]-'0';

                    // num*=10+(ans[i+]-'0');
                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
            }
            else if(t==8)
            {
                string p2="shata";
                int num;
                num=ans[i]-'0';

                // num*=10+(ans[i+1]-'0');
                tmp=p2;
                q.push(tmp);
                qnum.push(num);
                tmp="";
            }
            else if(t==10 || (t==9  && i==0))
            {
                if(t==10)
                {
                    string p2="hajar";
                    int num;
                    num=ans[i]-'0';
                    num=(num*10)+(ans[i+1]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
                else
                {
                    string p2="hajar";
                    int num;
                    num=ans[i]-'0';
                    // num*=10+(ans[i+]-'0');
                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
            }
            else if(t==12 || (t==11 && i==0))
            {
                if(t==12)
                {
                    string p2="lakh";
                    int num;
                    num=ans[i]-'0';
                    num=(num*10)+(ans[i+1]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
                else
                {
                    string p2="lakh";
                    int num;
                    num=ans[i]-'0';
                    // num*=10+(ans[i+]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
            }

            else if(t==14 || (t==13 && i==0))
            {
                if(t==14)
                {
                    string p2="kuti";
                    int num;
                    num=ans[i]-'0';
                    num=(num*10)+(ans[i+1]-'0');

                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
                else
                {
                    string p2="kuti";
                    int num;
                    num=ans[i]-'0';

                    // num*=10+(ans[i+]-'0');
                    tmp=p2;
                    q.push(tmp);
                    qnum.push(num);
                    tmp="";
                }
            }


        }
        tcase++;
        int cntdigit=0;
        int refs=tcase;
        while(refs)
        {
            refs=refs/10;
            cntdigit++;
        }
        for(int y=1; y<=4-cntdigit; y++)
            cout<<" ";
        cout<<tcase<<".";
        bool flag=false;
        int sz=q.size();
      //  cout<<sz<<endl;
        while(!q.empty())
        {
          //  if(sz!=1)
          //  cout<<" ";

            sz--;
            if(qnum.top()!=0)
            {
                cout<<" "<<qnum.top()<<" ";
                flag=true;
                cout<<q.top();
            }
            else if(qnum.top()==0)
            {
                string tul="kuti";
                if(q.top()==tul)
                {
                    cout<<" "<<tul;
                    flag=true;
                }

            }
            q.pop();
            qnum.pop();


        }
        if(cons!=0 && flag)
            cout<<" "<<cons<<endl;
        else if(cons!=0 && !flag)
            cout<<" "<<cons<<endl;
        else if(cons==0 && flag)
        {
            //cout<<cons<<endl;
            cout<<endl;
        }

        else if(cons==0 && !flag)
            cout<<" 0"<<endl;

    }
}
