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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        auto ok = [&](int target)
        {
            int cnt = 1;
            int l = 0;

            for (int r = 0; r < n; r++)
            {
                if (v[r] - v[l] > 2 * target)
                {
                    l = r;
                    cnt++;
                }
            }
            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, ans = -1;

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
