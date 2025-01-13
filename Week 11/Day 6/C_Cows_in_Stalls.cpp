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

    auto ok = [&](int mid)
    {
        int cnt = 1;
        int start = v[0];
        // cout << "MID : " << mid << endl;
        for (int i = 1; i < n; i++)
        {

            if (v[i] - start >= mid)
            {
                // cout << v[i] << " " << start << endl;
                start = v[i];
                cnt++;
            }
        }
        // cout<<cnt<<endl;
        return cnt >= k;
    };

    int l = 0, r = v[n - 1] - v[0], mid, ans=0;
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
    return 0;
}
