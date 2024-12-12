#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i < m + 1; i++)
    {

        cin >> v[i];
    }
    int ans = 0;
    int final = v[m];
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        int diff = v[i]^final;
        for (int j = 0; j < n; j++)
        {
            if (diff & (1<<j))
            {
                cnt++;
            }
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}
