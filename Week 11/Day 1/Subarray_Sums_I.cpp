#include <bits/stdc++.h>
#define int long long
#define float double
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

    unordered_map<int, int> mp;
    mp[0] = 1;

    int r = 0, sum = 0, cnt = 0;

    while (r < n)
    {
        sum += v[r];

        if (mp.find(sum - x) != mp.end())
        {
            cnt += mp[sum - x];
        }
        mp[sum]++;

        r++;
    }
    cout << cnt << endl;

    return 0;
}
