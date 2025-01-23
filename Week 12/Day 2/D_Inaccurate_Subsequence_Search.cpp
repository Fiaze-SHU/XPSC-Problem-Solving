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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n), b(m);

        map<int, int> cnta, cntb;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            cntb[b[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cnta[v[i]]++;
        }
        int cnt = 0, ans = 0;

        for (auto [x, y] : cntb)
        {
            cnt += min(cnta[x], cntb[x]);
        }
        ans += (cnt >= k);

        for (int i = m; i < n; i++)
        {
            cnta[v[i - m]]--;
            if (cnta[v[i - m]] < cntb[v[i - m]])
                cnt--;

            cnta[v[i]]++;

            if (cnta[v[i]] <= cntb[v[i]])
                cnt++;

            ans += (cnt >= k);
        }

        cout << ans << endl;
    }
    return 0;
}
