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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();

            ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();

            if (l <= 2 * v[i] && 2 * v[i] <= r)
                ans--;
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
