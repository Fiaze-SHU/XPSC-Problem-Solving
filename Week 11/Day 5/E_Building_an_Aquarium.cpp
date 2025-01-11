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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto ok = [&](int mid)
        {
            int cnt = 0;

            for (int i = 0; i < n; i++)
            {
                if (mid > v[i])
                    cnt += mid - v[i];
                if (cnt > k)
                    return false;
            }
            return true;
        };

        int l = 1, r = 2e9, ans, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
