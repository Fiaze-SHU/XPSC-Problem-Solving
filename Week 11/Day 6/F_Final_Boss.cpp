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
        int h, n;
        cin >> h >> n;
        vector<int> v(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        auto ok = [&](int mid)
        {
            int cnt = 0;

            for (int i = 0; i < n; i++)
            {
                int x = (mid + c[i] - 1) / c[i];

                cnt += (x * v[i]);
                if(cnt>=h)break;
                
            }

            return cnt >= h;
        };

        int l = 1, r = 1e12, mid, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (ok(mid))
            {

                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << ans << endl;
    }
    return 0;
}