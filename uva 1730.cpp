#include <cstdio>
#define N 20000001
typedef long long LL;
int main()
{
//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL ans[N] = {};
    for (int i = 2; i < N; ++i)
    {

        for (int j = i; j < N; j += i)
            ans[j] += i;

        ans[i] += ans[i - 1] + 1;
    }

    int n;
    while (scanf("%d", &n) && n)
        printf("%lld\n", ans[n]);

    return 0;
}
