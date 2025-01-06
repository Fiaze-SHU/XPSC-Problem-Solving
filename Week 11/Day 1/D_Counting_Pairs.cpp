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
        int n, sum = 0, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        int X = sum - x, Y = sum - y, ans = 0;

        for (int i = 0; i < n; i++)
        {
            int r = upper_bound(v.begin(), v.end(), X - v[i]) - v.begin();
            int l = lower_bound(v.begin(), v.end(), Y - v[i]) - v.begin();
            ans += max(0ll, r - l);
            if (Y <= 2 * v[i] && 2 * v[i] <= X)ans--;
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
