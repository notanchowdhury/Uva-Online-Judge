#include<bits/stdc++.h>
using namespace std;
int ans=0;
struct node
{
    bool endmark;
    int visited;
    node* next[26 + 1];
    node()
    {
        endmark = false;
        visited=0;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
} * root;
void insert(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
        curr->visited+=1;
    }
    curr->endmark = true;
}
void search(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';

        curr = curr->next[id];
        if(curr->visited==1)
        {
            ans+=i+1;
            return ;
        }
    }

}
void del(node* curr)
{
    for(int i=0; i<26; i++)
    {
        if(curr->next[i])
            del(curr->next[i]);

    }
    delete(curr);
}
 string s[1001];
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//freopen("dataset3.txt","r",stdin);
//freopen("in.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        root=new node();
        int n;
        cin>>n;
        ans=0;

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            string p=s[i];
            int l=p.size();
            insert(p,l);
        }

        for(int i=0; i<n; i++)
        {
            string p=s[i];
            int l=p.size();
            search(p,l);
        }
        cout<<ans<<endl;
        del(root);
    }
}
