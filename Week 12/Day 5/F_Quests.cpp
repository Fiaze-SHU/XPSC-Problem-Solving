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
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n), temp(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            temp[i] = v[i];
        }
        sort(temp.begin(), temp.end(), greater<int>());
        for (int i = 0; i < min(d, n); i++)
        {
            sum += temp[i];
        }
        if (sum >= c)
        {
            cout << "Infinity" << endl;
            continue;
        }
        else if (temp.front() * d < c)
        {
            cout << "Impossible" << endl;
            continue;
        }

        auto ok = [&](int mid)
        {
            int sum = 0;
            int start = 0;
            for (int i = 0; i < d; i++)
            {
                if (start < n)
                {
                    sum += temp[start];
                }
                start++;
                if (start > mid)
                    start = 0;
            }
            return sum >= c;
        };

        int l = 0, r = d, mid, ans;
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
