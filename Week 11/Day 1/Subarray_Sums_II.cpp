#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    mp[0] = 1;

    int prefix = 0, cnt = 0;

    for (int r : v)
    {
        prefix += r;

        cnt += mp[prefix - x];

        mp[prefix]++;
    }
    cout << cnt << endl;

    return 0;
}
