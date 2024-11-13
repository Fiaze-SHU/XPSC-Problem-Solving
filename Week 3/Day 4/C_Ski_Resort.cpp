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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> len;

        int cnt = 0;

        for (int i = 0; i <= n; i++)
        {
            if (i < n && v[i] <= q)
                cnt++;

            else if ((i == n || v[i] > q))
            {
                if (cnt >= k)
                    len.push_back(cnt);
                cnt = 0;
            }
        }
        int sum = 0;
        for (auto i : len)
        {
            if(i>=k)
            {
                int rem=i-k;
                i=1+rem;

            }
            sum += (i * (i + 1)) / 2;
        }
        cout << sum << endl;
    }
    return 0;
}
