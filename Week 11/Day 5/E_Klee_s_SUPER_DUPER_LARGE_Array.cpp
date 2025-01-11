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

        int l = 1, r = n, mid, ans = 1e18;

        auto ok = [&](int mid)
        {
            int total = (n * (2 * k + n - 1)) / 2;
            int left = (mid * (2 * k + mid - 1)) / 2;
            int right = total - left;

            return abs(right - left);
        };

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            int a = ok(mid);
            int b = ok(mid + 1);

            if (a < ans)
                ans = a;
            if (b < ans)
                ans = b;
                
            if (a < b)
                r = mid - 1;
            else
                l = mid + 1;

        }
        cout << ans << endl;
    }
    return 0;
}
