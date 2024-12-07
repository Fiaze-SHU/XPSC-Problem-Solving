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
        map<int, int> mp;
        set<int> st;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            st.insert(v[i]);
        }
        int L = -1, R = -1;

        vector<int> diff(st.begin(), st.end());

        int cnt = 0;
        int ans = 0;

        for (int i = 0; i < diff.size(); i++)
        {
            if (mp[diff[i]] < k)
            {
                cnt = 0;
            }
            if (i == 0 && mp[diff[i]] >= k || mp[diff[i]] >= k && v[i] - v[i] == 1)
            {
                cnt++;
            }
            if (ans < cnt)
            {
                ans = cnt;
                L = diff[i - (cnt - 1)];
                R = diff[i];
            }
        }
        if (L == -1)
            cout << -1 << endl;
        else
            cout << L << " " << R << endl;
    }
    return 0;
}
