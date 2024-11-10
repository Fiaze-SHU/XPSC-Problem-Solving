#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int ans = 0;

    int l = 0;
    int r = 0;

    while (l < n && r < m)
    {
        int cur = v[l], cnt1 = 0, cnt2 = 0;
        while (l < n && cur == v[l])
        {
            l++;
            cnt1++;
        }
        while (r < m && v2[r] < cur)
            r++;

        while (r < m && cur == v2[r])
        {
            r++;
            cnt2++;
        }
        ans += (cnt1 * cnt2);
    }
    cout << ans << endl;

    return 0;
}
