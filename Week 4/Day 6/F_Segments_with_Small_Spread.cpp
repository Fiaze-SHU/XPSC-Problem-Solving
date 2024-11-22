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
    multiset<int> ml;

    int l = 0, r = 0, ans = 0;

    while (r < n)
    {
        ml.insert(v[r]);
        int mx = *ml.rbegin();
        int mn = *ml.begin();

        if (mx - mn <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mx = *ml.rbegin();
                mn = *ml.begin();
                if (mx - mn <= s)
                    break;
                ml.erase(ml.find(v[l]));
                l++;
            }
            mx = *ml.rbegin();
            mn = *ml.begin();
            if (mx - mn <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
