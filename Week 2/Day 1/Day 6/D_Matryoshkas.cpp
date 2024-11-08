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
        map<int, int> mp;
        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            st.insert(v[i]);
        }

        int cnt = 0;
        cnt += mp[*st.begin()];
        int first = *st.begin();

        for (auto it = next(st.begin()); it != st.end(); it++)
        {
            if (mp[*it] > mp[first] && *it - first == 1)
            {
                cnt += (mp[*it] - mp[first]);
            }
            else if (*it - first != 1)
            {
                cnt += mp[*it];
            }
            first = *it;
        }
        cout << cnt << endl;
    }
    return 0;
}
