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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<tuple<int, int, int>, int> mp, mp2;
        int cnt = 0;

        for (int i = 0; i < n - 2; i++)
        {
            cnt += mp[{v[i], v[i + 1], 0}] - mp2[{v[i], v[i + 1], v[i + 2]}];
            cnt += mp[{v[i], 0, v[i + 2]}] - mp2[{v[i], v[i + 1], v[i + 2]}];
            cnt += mp[{0, v[i + 1], v[i + 2]}] - mp2[{v[i], v[i + 1], v[i + 2]}];

            mp2[{v[i], v[i + 1], v[i + 2]}]++;
            mp[{v[i], v[i + 1], 0}]++;
            mp[{v[i], 0, v[i + 2]}]++;
            mp[{0, v[i + 1], v[i + 2]}]++;
        }
        cout << cnt << endl;
    }
    return 0;
}
