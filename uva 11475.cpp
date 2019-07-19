#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;
#define mx 100010
char text[mx],pattern[mx];
int Lps[mx];
int count,length;
void bulidLps()
{
    int i=1;
    int j=0;
    Lps[0]=0;
    while(i<length)
    {
        if(pattern[i]==pattern[j])
        {
            j++;
            Lps[i]=j;
            i++;
        }
        else
        {
            if(j>0)
            {
                j=Lps[j-1];
            }
            else{
                Lps[i]=0;
                i++;
            }
        }
    }

}
void KMP()
{
    bulidLps();
   int i=0,j=0;
    while(i<length)
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
            count=j;
        }
        else{
            if(j>0)
            {
                j=Lps[j-1];
            }
            else
            {
                i++;
            }
        }
    }
}
int main()
{
    while(gets(text))
    {
        length=strlen(text);
        if(length==0)
            break;

      for(int i=length-1,j=0;i>=0;i--,j++)
      {
          pattern[j]=text[i];
      }
        count=0;
        KMP();
        cout<<text;
        for(int i=count;i<length;i++)
            cout<<pattern[i];

        cout<<endl;
    }
}
