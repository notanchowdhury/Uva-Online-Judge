/* #include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int soldier,report,i,j,K,Q,dif,L,R,arr[100005],arr2[100005];
    arr[-1]=100;
    arr2[0]=100;
    while(scanf("%d %d",&soldier,&report)==2&&soldier!=0&&report!=0)
    {
        for(i=1;i<=soldier;i++)
        {
            arr[i]=0;
            arr2[i]=0;
        }
        for(i=1;i<=report;i++)
        {
            cin>>L>>R;

        dif=1;
            for(j=L;j<=R;j++)
            {
                arr[j]=(R-j)+1;
                arr2[j]=dif*(-1);
                dif++;
            }
            bool flag=false;
            K=L-1;

            while(K>=1)
            {
                if(arr2[K]==0)
                {
                    cout<<K;
                    flag=true;
                    break;
                }
                else{

                    K=K+arr2[K];


                }
            }
            if(!flag)
            {
                cout<<"*";
            }
            cout<<" ";
            Q=R+1;
            flag=false;
            while(Q<=soldier)
            {
                if(arr[Q]==0)
                {
                    cout<<Q;
                    flag=true;
                    break;
                }
                else
                    Q=Q+arr[Q];
            }
            if(!flag)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<"-"<<endl;
    }
    return 0;
}*/
#include <cstdio>
using namespace std;

int left[100005], right[100005];

int main() {
	int s, b;

	while (scanf("%d %d", &s, &b), s || b) {
		for (int i = 1; i <= s; i++) {
			left[i] = i - 1;
			right[i] = i + 1;
		}
		right[s] = -1;
		left[1] = -1;

		int l, r;
		for (int i = 0; i < b; i++) {
			scanf("%d %d", &l, &r);

			left[right[r]] = left[l];
			if (left[l] != -1)
				printf("%d", left[l]);
			else
				printf("*");

			right[left[l]] = right[r];
			if (right[r] != -1)
				printf(" %d\n", right[r]);
			else
				printf(" *\n");
		}
		printf("-\n");
	}

	return 0;
}

