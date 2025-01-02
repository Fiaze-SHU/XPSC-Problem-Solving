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
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1), prefix(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());

        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i - 1];
        }

        for (int i = 0; i < k; i++)
        {
            int key, ans = -1;
            cin >> key;

            auto it = lower_bound(prefix.begin(), prefix.end(), key);
            if (it != prefix.end())
                ans = it - prefix.begin();
            cout << ans << endl;
        }
    }
    return 0;
}
