#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t, p;
    cin >> t >> p;
    int n = t.size();
    int m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }

    auto ok = [&](int target)
    {
        vector<bool> check(n);

        for (int i = 0; i <= target; i++)
        {
            check[v[i]] = true;
        }
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (!check[i] && t[i] == p[j])
            {
                j++;
            }
            if (j == m)
                return true;
        }
        return false;
    };

    int l = 0, r = n - 1, mid, ans = 0;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid+1;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
