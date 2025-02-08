#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n + 1);
        int start = 1;

        for (int i = 1; i <= k; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = i; j <= n; j += k)
                {
                    ans[j] = start;
                    start++;
                }
            }
            else
            {
                int temp = i;
                while (i <= n)
                {
                    if (temp + k > n)
                        break;
                    temp += k;
                }
                for (; temp >= 0; temp -= k)
                {
                    ans[temp] = start;
                    start++;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
