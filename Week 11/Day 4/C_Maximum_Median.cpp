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

    sort(v.begin(), v.end());

    auto ok = [&](int target)
    {
        int cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            if (v[i] < target)
                cnt += target - v[i];
        }
        return cnt <= k;
    };

    int l = 1, r = 2e9, mid, ans;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;

    return 0;
}
