#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int num,i,j,k;
  vector<pair<int,int> >arr;
    while(cin>>num)
    {
        k=2*num;
        int q=0;
        int count=0;
        for(i=num+1;i<=k;i++)
        {
          if((i*num)%(i-num)==0){

               arr.push_back(make_pair((i*num)/(i-num),i));
            }
        }
        cout<<arr.size()<<endl;
        for(size_t r=0;r<arr.size();r++)
            cout<<"1/"<<num<<" = "<<"1/"<<arr[r].first<<" + "<<"1/"<<arr[r].second<<endl;

        arr.clear();
    }
    return 0;
}
