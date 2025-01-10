#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](int second)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (second / v[i]);
            if (cnt >= k)
                return true;
        }
        return false;
    };

    int l = 1, r = 1e18, mid, ans = 0;
    while(l<=r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}
