#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;

    int l = 0, r = 0, ans = 0;

    while (r < n)
    {
        mp[v[r]]++;

        while (mp.size() > s)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }
            l++;
        }

       

        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl;
    return 0;
}
