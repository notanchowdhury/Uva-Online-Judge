#include <iostream>
#include<cstdio>
#include <queue>
#include <string.h>
using namespace std;
typedef uint64_t u64_t;
#define MAX 1030

u64_t fibonacci[MAX];
void fibo()
{
  u64_t start = 0;
  u64_t next = 1;
  u64_t _new;

  for (int r = 1; r <48; r++)
  {
    _new = next + start;
    start = next;
    next = _new;
    fibonacci[r-1]=_new;

  }

}
int main()
{
  int testcase;
  fibo();
  cin>>testcase;
  queue<int>q;
  for(int p=1;p<=testcase;p++)
  {
      int N,M,arr[100],qtop,qrear;
      cin>>N;
      int maximum=0;
      string keep;
      for(int i=0;i<N;i++)
      {
          cin>>M;
          if(M>maximum)
          {
              maximum=M;
          }
          q.push(M);
      }
      int rr=0,countposition=0,out=0;
      while(maximum!=fibonacci[rr])
      {
          countposition++;
          arr[rr]=0;
          rr++;

      }
      arr[rr]=0;



     getline(cin,keep);

      char str[120],output[120];
      gets(str);

      int len=strlen(str);

      for(int i=0;i<len;i++)
      {
          if(str[i]>='A'&&str[i]<='Z')
          {
              if(q.empty())
              {

                  break;
              }
              qtop=q.front();
              for(int j=0;j<countposition+1;j++)
                  {
                    if(fibonacci[j]==qtop)
                    {
                        arr[j]=1;
                        output[j]=str[i];
                        out++;

                        break;
                    }
                  }
             q.pop();

          }
      }
      for(int k=0;k<countposition+1;k++)
      {
          if(arr[k]==0)
          {
              output[k]=' ';
              out++;
          }
      }

      for(int e=0;e<out;e++)
      {
          cout<<output[e];
      }
      cout<<endl;

  }
  return 0;
}
