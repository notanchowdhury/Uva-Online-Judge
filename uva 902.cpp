#include<iostream>
#include<cstdio>
#include<string.h>

#include<map>
using namespace std;


    map<string ,int> mymap;
    map<string, int>::iterator it;
int main()
{
  char str[100000];
  int i, j ,k,N;
  while(cin>>N)
  {
                 mymap.clear();
              string line;
              cin>>line;
              for(i=0;i<(int)line.length()-N+1;i++)
              {
                  string temp;
                  temp=line.substr(i,N);
                  it=mymap.find(temp);
                  if(it==mymap.end())
                  {
                      mymap.insert(pair<string,int>(temp,1));
                  }
                  else{
                    it->second+=1;

                  }

              }
              int max=0;
              string maxstring;
              for(it=mymap.begin();it!=mymap.end();it++)
              {
                  if(it->second>max)
                  {
                      max=it->second;
                      maxstring=it->first;
                  }
              }
              cout<<maxstring<<endl;



  }
  return 0;
}
