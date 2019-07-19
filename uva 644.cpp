#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
 struct node{
         bool endmark;

         node* next[3];
         node()
         {
             endmark = false;

          for(int i=0;i<3;i++){
            next[i]=NULL;
          }

         }
 }*root;
 int flag=1;
 int visit;
 void insert(string str,int len)
 {

     node* curr=root;
     visit=0;
     for(int i=0;i<len;i++)
     {
         int id=str[i]-'0';
         if(curr->next[id]==NULL)
         {
             visit=1;
            if(curr->endmark)
            {

                flag=0;
            }
            curr->next[id] =new node();
         }
          curr=curr->next[id];
     }
     if(curr->endmark||visit==0)
     {

         flag=0;
     }
     else
        curr->endmark=true;
 }

 void del(node* cur)
 {
     for(int i=0;i<3;i++)
     {
         if(cur->next[i])
         {
             del(cur->next[i]);
         }
     }
     delete(cur);
 }
 int main()
{


    int num_str;
    string str;
    queue<string>q;
    int sets=1;
    while(1){
                     root=new node();
                        flag=1;
               int count=0;
                while(cin>>str){

                if(str!="9")
                    q.push(str);
                else
                    break;
                 count++;

                }
                if(q.empty())
                    break;

            for(int i=1;i<=count;i++)
            {
               string p = q.front();
              insert(p,p.size());
               q.pop();
            }
            if(flag!=0)
            {
                cout<<"Set "<<sets<<" is immediately decodable"<<endl;
            }
            else
                 cout<<"Set "<<sets<<" is not immediately decodable"<<endl;

            sets++;

        del(root);
    while(!q.empty())
    {
        q.pop();
    }
    }
    return 0;
}



