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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto ok = [&](int mid)
        {
            bool an = true;

            vector<int>v=a;

            for (int j = 1; j <= mid; j++)
            {
                int x = (mid - j + 1);

                sort(v.begin(), v.end(), greater<int>());

                bool flag = false;
                for (int i = 0; i < v.size(); i++)
                {
                    if (v[i] <= x)
                    {
                        v.erase(v.begin() + i);
                        flag = true;
                        break;
                    }
                }
                sort(v.begin(), v.end());
                if (v.size() > 0)
                    v[0] += x;
                if (!flag)
                    an = false;
            }
            return an;
        };

        int l = 1, r = n, mid, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            // cout<<mid<<endl;

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
